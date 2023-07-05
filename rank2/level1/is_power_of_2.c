/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:43:01 by simao             #+#    #+#             */
/*   Updated: 2023/05/08 11:43:45 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (i <= n)
	{
		if (i * i == n)
			return (1);
		i++;
	}
	return (0);
}