/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:42:15 by smagalha          #+#    #+#             */
/*   Updated: 2023/04/11 20:21:35 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

int	*highest_common_factors(int a)
{
	int	i;
	int	j;
	int	*denominadores;

	denominadores = (int *)malloc(sizeof(int) * a);
	i = 1;
	j = 0;
	while (i <= a)
	{
		if (a % i == 0)
		{
			denominadores[j] = i;
			j++;
		}
		i++;
	}
	denominadores[j] = '\0';
	return (denominadores);
}

int	compare_common_factors(char *a, char *b)
{
	int	*common_factors;
	int	*other_common_factors;
	int	i;
	int	j;
	int	max;

	max = 1;
	i = 0;
	j = 0;
	common_factors = highest_common_factors(atoi(a));
	other_common_factors = highest_common_factors(atoi(b));
	while (common_factors[j] != '\0')
	{
		while (other_common_factors[i] != '\0')
		{
			if (other_common_factors[i] == common_factors[j])
				max = common_factors[j];
			i++;
		}
		i = 0;
		j++;
	}
	printf("%d\n", max);
	return (max);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	else
		compare_common_factors(argv[1], argv[2]);
}
