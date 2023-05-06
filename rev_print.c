/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 23:31:37 by simao             #+#    #+#             */
/*   Updated: 2023/05/06 23:32:16 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print_reverse(char *str)
{
	int	len;

	len = ft_strlen(str) - 1;
	while (len >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_reverse(argv[1]);
	write(1, "\n", 1);
}
