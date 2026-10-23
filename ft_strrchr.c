/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:03:29 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/19 16:03:30 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	size_t	len;

	p = (char *)s;
	len = ft_strlen(p);
	while (len > 0)
	{
		if (p[len] == (unsigned char)c)
		{
			return (&p[len]);
		}
		len--;
	}
	if (p[len] == (unsigned char)c)
	{
		return (&p[len]);
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void){
	char tab[] = "AGBCJDEDF";
	char c = 'D';
	char *ptr = ft_strrchr(tab,c);
	printf("The last occ of %c in %s is at %s\n",c,tab,ptr);
	return (0);
}
*/
