/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 00:12:27 by simao             #+#    #+#             */
/*   Updated: 2023/05/09 00:19:03 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int	*tab, unsigned int len)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}