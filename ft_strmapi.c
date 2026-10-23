/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:02:00 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/23 11:02:03 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

/*static char	ft_oddup(unsigned int i, char c)
{
	if (i % 2 == 1)
	{
		c = ft_toupper(c);
	}
	return (c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*dest;

	i = 0;
	if (!s || !f)
	{
		return (NULL);
	}
	len = ft_strlen(s);
	dest = malloc(len + 1);
	if (!dest)
	{
		return (NULL);
	}
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void){
	const char str[] = "zakaria";
	char *result = ft_strmapi(str , &ft_oddup);
	if(!result){
		return (1);
	}
	printf("The new string is :%s\n",result);
	free(result);
	return (0);
}
*/
