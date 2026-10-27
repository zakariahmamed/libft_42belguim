/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:56:44 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/27 12:56:47 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*current;
	void	*d;
	t_list	*temp;

	result = NULL;
	if (lst != NULL && f != NULL && del != NULL)
	{
		current = lst;
		while (current != NULL)
		{
			d = f(current->content);
			temp = ft_lstnew(d);
			if (temp == NULL)
			{
				del(d);
				ft_lstclear(&result, del);
				return (NULL);
			}
			ft_lstadd_back(&result, temp);
			current = current->next;
		}
	}
	return (result);
}
/*
void	ft_reader(t_list **lst){
	t_list *current = *lst;
	while(current != NULL){
		printf("%d\n",*((int *)current->content));
		current = current->next;
	}
}
int	main(void){
	int a =42;
	int b =10;
	int c = 13;
	t_list *n0 = ft_lstnew(&a);
	t_list *n1 = ft_lstnew(&b);
	t_list *n2 = ft_lstnew(&c);
	t_list *head = n0;
	head->next = n1;
	head->next->next = n2;
	ft_reader(&head);
	t_list *result = ft_lstmap(head,ft_assign,ft_del);
	ft_reader(&head);
	return (0);
}
*/
