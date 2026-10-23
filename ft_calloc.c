/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:49:05 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/21 12:25:35 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <string.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*z_area;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (nmemb && size > SIZE_MAX / nmemb)
	{
		return (NULL);
	}
	z_area = malloc(nmemb * size);
	if (!z_area)
	{
		return (NULL);
	}
	ft_bzero(z_area, nmemb * size);
	return (z_area);
}
/*
#include <stdio.h>

int	main(void){
	//char tab[] = "abcdef";
	//size_t g_tsize = ft_strlen(tab);
	//size_t u_tsize = sizeof(char);
	int numbers[] = {10,20,5};
	size_t g_size = sizeof(numbers)/sizeof(numbers[0]);
	size_t u_size = sizeof(numbers[0]);
	char *area = ft_calloc(g_size,u_size);
	printf("The memory area contain %s\n",area);
	return (0);
}
*/
