/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:52:25 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/27 11:52:26 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (lst != NULL && del != NULL)
	{
		while (*lst != NULL)
		{
			current = *lst;
			current = current->next;
			ft_lstdelone(*lst, del);
			*lst = current;
		}
	}
}
/*
#include <stdio.h>

void	ft_lstreader(t_list **lst){
	if(lst != NULL && *lst != NULL){
		t_list *current = *lst; //current pointe sur adresse du premier node
		while(current != NULL){
			printf("%d\n",*((int *)current->content));
			current = current->next;
		}
	}
}

int	main(void){
	int t  =42;;
	t_list *n0 = ft_lstnew(&t);
	t_list *n1 = ft_lstnew(&t);
	t_list *n2 = ft_lstnew(&t);
	if(n0 == NULL){
		return (1);
	}
	t_list *head = n0;
	head ->next = n1;
	head ->next->next = n2;
	ft_lstreader(&head);
	ft_lstclear(&head,del);
	ft_lstreader(&head);
	return (0);
}
*/
