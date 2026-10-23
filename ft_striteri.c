/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:50:46 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/22 18:50:48 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stddef.h>
/*
static void	ft_even_lower(unsigned int i, char *p)
{
	if (*p >= 'a' && *p <= 'z' && i % 2 == 0)
	{
		*p -= 32;
	}
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

int	main(void){
	char str[] = "zakaria";
	printf("The string before%s\n",str);
	ft_striteri(str,&ft_even_lower);
	printf("The string After%s\n",str);
	return (0);
}
*/
