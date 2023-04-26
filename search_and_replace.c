/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:08:15 by smagalha          #+#    #+#             */
/*   Updated: 2023/04/26 20:20:15 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*search_and_replace(char *str, char to_remove, char to_put)
{
	int	i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == to_remove)
			str[i] = to_put;
		write(1, &str[i], 1);
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
}
