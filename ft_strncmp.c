/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:58:37 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/19 16:58:41 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
}
/*
#include <stdio.h>

int	main(void){
	char tab1[] = "ABCD";
	char tab2[] = "ABCD";
	size_t n =14;
	int result = strncmp(tab1,tab2,n);
	printf("The comparaisom btwn %s and %s until %ld is:
		%d\n",tab1,tab2,n,result);
	return (0);
}
*/
