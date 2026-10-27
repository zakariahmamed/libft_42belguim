/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 20:52:14 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/26 20:52:16 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
#include <stdio.h>

int	main(void){
	int n = 42;
	t_list *res = ft_lstnew(&n);
	if(!res){
		return (1);
	}
	printf("The content is :%d",*((int *)res->content));
	return (0);
}
*/
