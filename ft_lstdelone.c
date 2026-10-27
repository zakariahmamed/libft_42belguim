/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 10:01:03 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/27 10:01:08 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL && del != NULL)
	{
		del(lst->content);
		free(lst);
	}
}
/*
static void	ft_delcnt(void *c){
		free(c);
}
static void	ft_read_lst(t_list **lst){
	if(lst != NULL && *lst != NULL){
		t_list *reader = *lst;
		while(reader != NULL){
			printf("%d\n",*((int *)reader->content));
			reader = reader->next;
		}
	}
}
int	main(void){
	int b = 12;
	int a = 42;
	int *d = malloc(sizeof(int));
	*d = 12;
	t_list *n0 = ft_lstnew(&b);
	t_list *n1 = ft_lstnew(&a);
	t_list *n2 = ft_lstnew(d);
	if(!n0){
		return (1);
	}
	t_list *head = n0;
	head->next = n1;
	head ->next->next =n2;
	//ft_read_lst(&head);
	ft_lstdelone(n2,ft_delcnt);
	head->next->next = NULL;
	ft_read_lst(&head);
	return(0);
}
*/
