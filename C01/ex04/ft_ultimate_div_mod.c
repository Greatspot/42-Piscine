/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:09:55 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/08/03 15:43:07 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b)
{
	int temp_div;
	int temp_mod;

	if (*b != 0)
	{
		temp_div = *a / *b;
		temp_mod = *a % *b;
		*a = temp_div;
		*b = temp_mod;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = 42;
	int	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%d", b);
	return (0);
}*/
