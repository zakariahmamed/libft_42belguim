/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:51:09 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/19 20:51:14 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps;
	unsigned char	*pd;
	size_t			i;

	ps = (unsigned char *)s1;
	pd = (unsigned char *)s2;
	i = 0;
	while (i < n && ps[i] == pd[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (ps[i] - pd[i]);
}
/*
#include <stdio.h>

int	main(void){
	//char tab1[] = "abef";
	//char tab2[] = "abcd";
	int a = 12;
	int b =100;
	size_t n =sizeof(int); //4octet of comparaison
	printf("the result of cmp btwn %d and %d until
		%ld is :%d\n",a,b,n,ft_memcmp(&a,&b,n));
	return (0);
}
*/
