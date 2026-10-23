/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:35:55 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/19 15:35:59 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
/*
#include <stdio.h>

int	main(void){
	char tab[] = "ACDFef>#@.";
	size_t i =0;
	while(tab[i]){
		tab[i] = ft_tolower(tab[i]);
		i++;
	}
	printf("The table : %s\n",tab);
	return (i);
}
*/
