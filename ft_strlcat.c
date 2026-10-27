/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:35:09 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/19 11:35:11 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	av_size;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (size >= ft_strlen(dst))
	{
		av_size = size - len_d;
		if (av_size == 0)
		{
			return (len_d + len_s);
		}
		else
		{
			ft_strlcpy(&dst[len_d], src, av_size);
			return (len_d + len_s);
		}
	}
	else
	{
		return (size + len_s);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	tab[] = "ABCDEF";
	char	c_tab[6] = "GH";
	size_t	result;

	result = ft_strlcat(c_tab, tab, sizeof(c_tab));
	printf("The %ld", result);
	printf("\nThe dest area contain : %s\n", c_tab);
	return (0);
}
*/
