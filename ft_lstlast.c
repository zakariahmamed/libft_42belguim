/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 21:38:29 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/26 21:39:30 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current != NULL && current->next != NULL)
	{
		current = current->next;
	}
	return (current);
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
		n2->next = n3;
		t_list *n0 = ft_lstnew(&b);
		ft_lstadd_front(&n1,n0);
		size_t size = ft_lstsize(n1);
	t_list *last = ft_lstlast(n1);
	printf("The last node is %p\n",last);
		t_list *s = n1;
		while(s!= NULL){
				printf("%d\n",*((int *)s->content));
				s = s->next;
		}
		printf("The size of is : %ld\n",size);
		return (0);
}
*/
