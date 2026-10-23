/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:41:42 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/19 15:41:44 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	size_t	i;
	size_t	len;

	p = (char *)s;
	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (p[i] == (unsigned char)c)
		{
			return (&p[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void){
	char tab[] = "ABCDEF";
	char c = 'z';
	char *ptr = ft_strchr(tab,c);
	printf("The first occurence of %c in %s is at %s ",c,tab,ptr);
	return (0);
}
*/
