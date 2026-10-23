/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:43:44 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/19 12:59:27 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
/*
#include <stdio.h>

int	main(void){
	char tab[]= "abcdeF./@#FH";
	size_t i =0;
	while(tab[i]){
		//the function takes a int (4 octet) and the value in the call is a char
		//(1 octet) so the compilrer cast implicite the hex value in the call
		//and in the value affectation in cases c-32
		//he do the same reverse cast from 4 octet to 1 octet
		tab[i] = ft_toupper(tab[i]);
		i++;
	}
	printf("The tab become :%s\n",tab);
}
*/
