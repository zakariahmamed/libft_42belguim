/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:34:52 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/20 13:34:54 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*pb;
	char	*pl;

	i = 0;
	j = 0;
	pb = (char *)big;
	pl = (char *)little;
	if (!*pl)
	{
		return (pb);
	}
	while (j < len && pb[j])
	{
		i = 0;
		while (pb[i + j] && pl[i] && pb[i + j] == pl[i] && i + j < len)
			i++;
		if (!pl[i])
			return (&pb[j]);
		j++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void){
	const char source[] = "4h4i42belgium";
	const char dest[] = "h4i";
	size_t len = 5;
	char *reader = ft_strnstr(source ,dest,len);
	printf("The substring starts at:%s\n",reader);
}
*/
