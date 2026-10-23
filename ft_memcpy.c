/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:57:04 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/15 12:57:09 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;
	size_t			i;

	pd = (unsigned char *)dest;
	ps = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		pd[i] = ps[i];
		i++;
	}
	return (dest);
}
/*
#include<stdio.h>
#include"libft.h"
int main(void){
	//char tab[] = "zakaria";
	size_t len = sizeof(int);
	//char d[len];
	int a = 10;
	int b;
	int *result = ft_memcpy(&b,&a,len);
	printf("The data copied from source is :%d\n",*result);
	return (0);
}
*/
