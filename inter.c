/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:23:10 by smagalha          #+#    #+#             */
/*   Updated: 2023/04/26 21:01:37 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;

	return (i);
}

int	char_in_string(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

void	inter(char *str1, char *str2)
{
	int		i;
	int		j;
	int		k;
	char	*tmp;

	i = 0;
	j = 0;
	k = 0;
	tmp = malloc(sizeof(char) * ft_strlen(str1) + 1);
	while (str1[i])
	{
		while (str2[j])
		{
			if (str1[i] == str2[j] && !char_in_string(tmp, str1[i]))
			{
				tmp[k] = str1[i];
				write(1, &str1[i], 1);
				k++;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
