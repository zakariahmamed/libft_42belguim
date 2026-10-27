/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 21:02:32 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/26 21:02:35 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
#include <stdio.h>

int	main(void){
	int a  = 42;
	int b = 12;
	t_list *n1 = ft_lstnew(&a);
	t_list *n2 = ft_lstnew(&a);
	t_list *n3 = ft_lstnew(&a);
	n1->next = n2;
	n2->next = n3;//n3 already set next on NULL whith ft_lstnew
	t_list *n0 = ft_lstnew(&b);
	ft_lstadd_front(&n1,n0);
	t_list *s = n1;
	while(s!= NULL){
		printf("%d\n",*((int *)s->content));
		s = s->next;
	}
	return (0);
}
*/
