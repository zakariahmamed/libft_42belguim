/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:06:09 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/22 18:06:18 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_getlen(long int nbr)
{
	size_t	len;

	len = 0;
	if (nbr <= 0)
	{
		len++;
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

static char	*ft_getstr(char *dest, long int nbr, size_t i)
{
	while (nbr > 0)
	{
		dest[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i--;
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	int			len;
	char		*dest;

	nbr = n;
	len = ft_getlen(nbr);
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	if (nbr == 0)
		dest[0] = '0';
	else if (nbr < 0)
	{
		dest[0] = '-';
		nbr *= -1;
	}
	dest = ft_getstr(dest, nbr, len - 1);
	return (dest);
}
/*
#include <stdio.h>

int	main(void){
		int number = 12233;
		char *result = ft_itoa(number);
		if(result == NULL){
		printf("The allocation failled\n");
				return (1);
		}
		printf("The output is :%s\n",result);
		free(result);
		return (0);
}
*/
