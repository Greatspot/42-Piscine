/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:42:03 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/24 11:25:29 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);
	result = 1;
	i = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
/*
int main(void)
{
    printf("Fatorial de 5: %d\n", ft_iterative_factorial(5));
    printf("Fatorial de 0: %d\n", ft_iterative_factorial(0));
    printf("Fatorial de -5: %d\n", ft_iterative_factorial(-5));
    printf("Fatorial de 10: %d\n", ft_iterative_factorial(10));
    return (0);
}*/
