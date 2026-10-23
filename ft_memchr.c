/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:50:07 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/19 18:50:09 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return (&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void){
	char tab[] = "Hello World!";
	char c  = 'o';
	size_t n = sizeof(tab);
	char *p = ft_memchr(tab , c, n);
	printf("The occurence of %c in memory area of %s is at %s",c,tab,p);
	return (0);
}
*/
