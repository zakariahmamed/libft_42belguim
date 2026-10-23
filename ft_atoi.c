/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:40:32 by zahmamed          #+#    #+#             */
/*   Updated: 2026/10/20 14:40:37 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

static int	ft_sign_handling(size_t sign, size_t sign_neg, size_t sign_pos)
{
	if (sign >= 2)
	{
		return (0);
	}
	else
	{
		if (sign_neg == 1 && sign_pos == 0)
		{
			return (-1);
		}
		return (1);
	}
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	size_t	sign_pos;
	size_t	sign_neg;
	int		result;

	i = 0;
	sign_pos = 0;
	sign_neg = 0;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	while (nptr[i] == 45 || nptr[i] == 43)
	{
		if (nptr[i++] == '-')
			sign_neg++;
		else
			sign_pos++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	result *= ft_sign_handling(sign_pos + sign_neg, sign_neg, sign_pos);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	result;

	// On regroupe toutes tes chaînes de test dans un tableau
	char *tests[] = {
		"  +123abcdef",
		"   +- 123acdv",
		"  --123vdc",
		"++123adc",
		"",
		"   ",
		"        -1245639bdbdb",
		NULL // Petit marqueur de fin (optionnel mais propre)
	};
	i = 0;
	while (tests[i] != NULL)
	{
		result = ft_atoi(tests[i]);
		printf("The atoi of \"%s\" is : %d\n", tests[i], result);
		i++;
	}
	return (0);
}

*/
