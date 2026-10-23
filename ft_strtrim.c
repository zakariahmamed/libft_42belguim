/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:30:14 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/22 11:30:18 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <string.h>

static size_t	ft_is_charset(char c, const char *st)
{
	size_t	j;

	j = 0;
	while (st[j])
	{
		if (st[j] == c)
		{
			return (1);
		}
		j++;
	}
	return (0);
}

static size_t	ft_getstart(char const *p, const char *st)
{
	size_t	start;

	start = 0;
	while (p[start] && ft_is_charset(p[start], st))
	{
		start++;
	}
	return (start);
}

static size_t	ft_getend(char const *d, const char *st)
{
	size_t	end;

	end = 0;
	while (d[end])
	{
		end++;
	}
	while (end > 0 && d[end - 1] && ft_is_charset(d[end - 1], st))
	{
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dest;
	size_t	len;

	start = ft_getstart(s1, set);
	end = ft_getend(&s1[start], set);
	len = end;
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
	{
		return (NULL);
	}
	ft_memcpy(dest, &s1[start], end);
	dest[end] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void){
	const char str[] = "  /\n/\t/\vZakaria/n/tHMAMED/ ";
	const char set[] = " \n\t\v/.?:";
	char *result = ft_strtrim(str,set);
	if(!result){
		return (1);
	}
	printf("The New String is :%s",result);
	printf("The len of result is %ld\n",ft_strlen(result));
	free(result);
	return (0);
}
*/
