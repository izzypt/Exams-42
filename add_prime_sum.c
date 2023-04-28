/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:32:45 by simao             #+#    #+#             */
/*   Updated: 2023/04/28 15:11:12 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;

	while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int	is_prime(int n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	add_prime_sum(int n)
{
	int	i;
	int	res;

	res = 0;
	i = 2;
	while (i <= n)
	{
		if (is_prime(i))
		{
			res = res + i;
		}	
		i++;
	}
	ft_putnbr(res);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		add_prime_sum(ft_atoi(argv[1]));
	write(1, "\n", 1);
}
