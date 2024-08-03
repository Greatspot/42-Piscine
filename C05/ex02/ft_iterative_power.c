/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:42:21 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/24 11:37:09 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	result = 1;
	i = 0;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*
int main(void)
{
    printf("2^3 = %d\n", ft_iterative_power(2, 3));
    printf("5^0 = %d\n", ft_iterative_power(5, 0));
    printf("0^0 = %d\n", ft_iterative_power(0, 0));
    printf("2^-3 = %d\n", ft_iterative_power(2, -3));
    return (0);
}*/
