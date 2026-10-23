/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 09:39:46 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/19 09:39:50 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
	{
		return (len);
	}
	while (i < (size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	tab[] = "password";
	char	dest[4];
	size_t	result;

	result = ft_strlcpy(dest, tab, sizeof(dest));
	printf("The size of source is :%zu\n", result);
	printf("The area pointed by dest contain: %s\n",dest);
	printf("The dest :%ld\n", sizeof(dest));
	return (0);
}
*/
