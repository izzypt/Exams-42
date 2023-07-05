/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:11:08 by simao             #+#    #+#             */
/*   Updated: 2023/04/26 17:14:40 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*duplicate;

	i = 0;
	len = ft_strlen(src);
	duplicate = malloc(len + 1);
	while (*src)
	{
		duplicate[i] = *src;
		src++;
		i++;
	}
	return (duplicate);
}
