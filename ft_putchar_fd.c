/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:17:11 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/22 13:17:14 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}
/*
int	main(void)
{
	char	c;

	c = 'A';
	int fd = 2;
	ft_putchar_fd(c, fd);
	return (0);
}
*/
