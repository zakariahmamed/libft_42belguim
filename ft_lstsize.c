/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 21:28:06 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/26 21:28:08 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*current;

	i = 0;
	current = lst;
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
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
		t_list *s = n1;
		while(s!= NULL){
				printf("%d\n",*((int *)s->content));
				s = s->next;
		}
	printf("The size of is : %ld\n",size);
		return (0);
}
*/
