/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:42:24 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/27 12:42:29 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL && f != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	ft_assign(void *s){
		*((int *)s) = 42;
}
int	main(void){
	ft_lstiter(head,ft_assign);
	return (0);
}
*/
