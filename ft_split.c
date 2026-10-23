/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:33:59 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/23 17:01:43 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_words(char const *p, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (p[i] && p[i] == c)
	{
		i++;
	}
	while (p[i])
	{
		while (p[i] && p[i] != c)
		{
			i++;
		}
		count++;
		while (p[i] && p[i] == c)
		{
			i++;
		}
	}
	return (count);
}

static size_t	ft_getlen(const char *p, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (p[i] && p[i] == c)
	{
		i++;
	}
	while (p[i] && p[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

static void	ft_free(char **dest, size_t k)
{
	size_t	j;

	j = 0;
	while (j < k)
	{
		free(dest[j]);
		j++;
	}
	free(dest);
}

static char	*ft_create_word(const char *s, size_t len)
{
	char	*word;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	ft_memcpy(word, s, len);
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	k;
	size_t	pos;
	size_t	len;
	size_t	n;

	n = ft_count_words(s, c);
	dest = malloc((n + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	k = 0;
	pos = 0;
	while (k < n)
	{
		while (s[pos] && s[pos] == c)
			pos++;
		len = ft_getlen(&s[pos], c);
		dest[k] = ft_create_word(&s[pos], len);
		if (!dest[k])
			return (ft_free(dest, k), NULL);
		pos += len;
		k++;
	}
	dest[n] = NULL;
	return (dest);
}
/*
#include <stdio.h>

static void	ft_aff_tab(char **tab){
	size_t i =0;
	while(tab[i]){
		printf("The %ld array of str is %s\n ",i,tab[i]);
		i++;
	}
}
static void	ft_free_tab(char **tab){
	size_t j =0;
	while(tab[j]){
		free(tab[j]);
		j++;
	}
	free(tab);
}
int	main(void){
	const char *str = "  HI  42  BELGIUM  ";
	char c = ' ';
	char **result = ft_split(str,c);
	if(!result){
		return (1);
	}
	ft_aff_tab(result);
	ft_free_tab(result);
	return (0);
}
*/
