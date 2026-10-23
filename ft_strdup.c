/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 20:56:11 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/20 20:56:14 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(s);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
	{
		return (NULL);
	}
	return (ft_memcpy(dest, s, len +1));
}
/*
#include <stdio.h>

int	main(void){
	const char tab[] = ".@Password123";
	char *result = ft_strdup(tab);
	if(!result){
		return(1);
	}
	printf("The string was duplicated and the dup is %s\n",result);
	return (0);
}
*/
