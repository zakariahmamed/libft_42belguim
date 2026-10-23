/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:39:17 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/21 12:39:28 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n){
		ft_memset(s,0,n);
}
int	main(void){
		char tab[] ="abcd";
		printf("the tab before%s\n",tab);
		ft_bzero(&tab,4);
		printf("the tab after%s\n",tab);
		return (0);
}
*/
