/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:33:02 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/07 20:53:33 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;

	while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = 10 * res + str[i] - '0';
		i++;
	}
	return (res * sign);
}

void	ft_putnbr(int num)
{
	if (num > 10)
		ft_putnbr(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}

void	tab_mult(int num)
{
	int	res;
	int	i;

	i = 1;
	while (i <= 9)
	{
		res = i * num;
		ft_putnbr(i);
		write(1, " ", 1);
		write(1, "x", 1);
		write(1, " ", 1);
		ft_putnbr(num);
		write(1, " ", 1);
		write(1, "=", 1);
		write(1, " ", 1);
		ft_putnbr(res);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(ft_atoi(argv[1]));
	else
		write(1, "\n", 1);
}
