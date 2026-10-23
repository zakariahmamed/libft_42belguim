/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:19:45 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/15 13:20:07 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ps;
	unsigned char	*pd;

	pd = (unsigned char *)dest;
	ps = (unsigned char *)src;
	if (ps < pd)
	{
		while (n > 0)
		{
			pd[n - 1] = ps[n - 1];
			n--;
		}
		return (dest);
	}
	else
	{
		return (ft_memcpy(dest, src, n));
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	tab[] = "ABCDEF";

	printf("The table before :%s\n", tab);
	ft_memmove(&tab[0], &tab[0], 4);
	printf("The table after :%s", tab);
	return (0);
}
*/
