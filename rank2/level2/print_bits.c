/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:30:29 by simao             #+#    #+#             */
/*   Updated: 2023/04/26 23:37:02 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int	i;
	int	bit;

	i = 7;
	while (i >= 0)
	{
		bit = octet >> i & 1;
		bit = '0' + bit;
		write(1, &bit, 1);
		i--;
	}
}
