/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 13:54:18 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/07 14:05:10 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && str[i] + 13 > 'z')
			str[i] = str[i] - 13;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && str[i] + 13 > 'Z')
			str[i] = str[i] - 13;
		else if ((str[i] >= 'A' && str[i] <= 'Z') || \
		(str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] + 13;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}
