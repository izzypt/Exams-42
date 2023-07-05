/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:08:41 by smagalha          #+#    #+#             */
/*   Updated: 2023/05/08 18:36:19 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr) 
{
    int n;
    int len;
  
    n = nbr;
    len = 0;
	// if number is less than 0, increase len 1 to allocate memory for the - sign
    if (nbr <= 0)
		  len++;
	// check how many decimal places are in the number, we will allocate memory for each one
    while (n) 
    {
        n /= 10;
        len++;
    }
	// take then len we just measured and allocate it in memory
    char *result = (char *)malloc(sizeof(char) * (len + 1));
	// if malloc failed return NULL
    if (result == NULL) 
        return NULL;
	// set the null terminator at the end of the string
    result[len] = '\0';
	// if number is equal to 0 just return 0
    if (nbr == 0)
    {
		  result[0] = '0';
		  return(result);
    }
	// if number is less than, set the fisrt element in the array with - and invert the number
    if (nbr < 0) 
    {
        result[0] = '-';
        nbr = -nbr;
    }
	//while the number exists. We will create the string backwards. Take the first number on the right and divide the number by 10 each time
    while (nbr) 
    {
        result[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return result;
}
