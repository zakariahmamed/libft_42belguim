/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 22:22:59 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/21 22:23:09 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*dest;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	dest = malloc(len_s1 + len_s2 + 1);
	if (!dest)
	{
		return (NULL);
	}
	dest = ft_memcpy(dest, s1, len_s1);
	ft_memcpy(&dest[len_s1], s2, len_s2);
	dest[len_s1 + len_s2] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int	main(void)
{
	char	tab1[] = "hi";
	char	tab2[] = "42";
	char	*result;

	result = ft_strjoin(tab1, tab2);
	if (!result)
	{
		return (1);
	}
	printf("The result is %s\n", result);
	free(result);
	return (0);
}
*/
