/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 09:13:54 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/27 09:13:56 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (lst != NULL && *lst == NULL)
	{
		*lst = new;
	}
	else if (lst != NULL && new != NULL)
	{
		current = *lst;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
}
/*
#include <stdio.h>

int	main(void){
	int a  = 42;
	int b =12;
	t_list *n0 = ft_lstnew(&a);
	t_list *n1 = ft_lstnew(&a);
	t_list *n2 = ft_lstnew(&a);
	t_list *head;
	if(n0 && n1 && n2){//existe
		head = n0;
		head->next = n1;
		head->next->next = n2;
		//for the next of last node is already seted at NULL buy ft_lstnew
	}
	t_list *n_l = ft_lstnew(&b);
	ft_lstadd_back(&head , n_l);
	t_list *current = head;
	while(current != NULL){
		printf("%d",*((int *)current->content));
		current = current->next;
	}
	return (0);
}
*/
