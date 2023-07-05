/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:52:51 by simao             #+#    #+#             */
/*   Updated: 2023/07/05 12:10:05 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

void	put_str(char *str, int *len)
{
	if (!str)
		str = "(null)";
	while (*str)
		*len += write(1, str++, 1);
}

void	put_digit(long long int number, int base, int *length)
{
	char	*hexadecimal;

	hexadecimal = "0123456789abcdef";
	if (number < 0)
	{
		number = number * -1;
		*length += write(1, "-", 1);
	}
	if (number >= base)
		put_digit((number / base), base, length);
	*length += write(1, &hexadecimal[number % base], 1);
}

int	ft_printf(const char *str, ...)
{
	int		length;
	va_list	args;

	length = 0;
	va_start(args, str);

	while (*str)
	{
		if (*str == '%' && \
		(*(str + 1) == 's' || *(str + 1) == 'd' || *(str + 1) == 'x'))
		{
			str++;
			if (*str == 's')
				put_str(va_arg(args, char *), &length);
			if (*str == 'd')
				put_digit((long long int)va_arg(args, int), 10, &length);
			if (*str == 'x')
				put_digit((long long int)va_arg(args, unsigned int), 16, &length);
		}
		else
			length += write(1, str, 1);
		str++;
	}
	va_end(args);
	return (length);
}
