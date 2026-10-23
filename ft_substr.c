/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:05:23 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/21 19:05:25 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <string.h>

static char	*ft_strncopy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static size_t	ft_getlen(size_t len_src, size_t start, size_t len)
{
	if (len > len_src - start)
	{
		return (len_src - start);
	}
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	len_s;
	char	*empty;
	size_t	n;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		empty = (char *)malloc(1);
		if (!empty)
			return (NULL);
		empty[0] = '\0';
		return (empty);
	}
	n = ft_getlen(len_s, start, len);
	dest = malloc((n + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	return (ft_strncopy(dest, &s[start], n));
}
/*
#include <stdio.h>
#include <stdlib.h>

char			*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char	*result;

	printf("=== TEST 1 : extraction normale ===\n");
	result = ft_substr("Bonjour", 3, 2);
	printf("Attendu : jo\nObtenu   : %s\n\n", result);
	free(result);
	printf("=== TEST 2 : len depasse la fin ===\n");
	result = ft_substr("Bonjour", 3, 20);
	printf("Attendu : jour\nObtenu   : %s\n\n", result);
	free(result);
	printf("=== TEST 3 : start egal a strlen ===\n");
	result = ft_substr("Bonjour", 7, 3);
	printf("Attendu : chaine vide\nObtenu   : [%s]\n\n", result);
	free(result);
	printf("=== TEST 4 : chaine source vide ===\n");
	result = ft_substr("", 0, 5);
	printf("Attendu : chaine vide\nObtenu   : [%s]\n\n", result);
	free(result);
	printf("=== TEST 5 : len egal a zero ===\n");
	result = ft_substr("Bonjour", 2, 0);
	printf("Attendu : chaine vide\nObtenu   : [%s]\n\n", result);
	free(result);
	printf("=== TEST 6 : extraction depuis le debut ===\n");
	result = ft_substr("Bonjour", 0, 3);
	printf("Attendu : Bon\nObtenu   : %s\n\n", result);
	free(result);
	printf("=== TEST 7 : len exact ===\n");
	result = ft_substr("Bonjour", 0, 7);
	printf("Attendu : Bonjour\nObtenu   : %s\n\n", result);
	free(result);
	printf("=== TEST 8 : start superieur a strlen ===\n");
	result = ft_substr("Bonjour", 20, 5);
	printf("Attendu : chaine vide\nObtenu   : [%s]\n\n", result);
	free(result);
	printf("=== TEST 9 : un seul caractere ===\n");
	result = ft_substr("Bonjour", 4, 1);
	printf("Attendu : o\nObtenu   : %s\n\n", result);
	free(result);
	printf("=== TEST 10 : resultat independant ===\n");
	result = ft_substr("Bonjour", 1, 3);
	printf("Attendu : onj\nObtenu   : %s\n\n", result);
	free(result);
	return (0);
}
*/
