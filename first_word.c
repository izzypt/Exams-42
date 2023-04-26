/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:55:48 by simao             #+#    #+#             */
/*   Updated: 2023/04/26 16:59:08 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_word(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			write(1, &str[i], 1);
			if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i +1] == '\0')
				break ;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_word(argv[1]);
	write(1, "\n", 1);
}
