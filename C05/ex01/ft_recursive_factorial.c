/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:42:15 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/24 11:33:28 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main(void)
{
    printf("Fatorial de 5: %d\n", ft_recursive_factorial(5));
    printf("Fatorial de 0: %d\n", ft_recursive_factorial(0));
    printf("Fatorial de -5: %d\n", ft_recursive_factorial(-5));
    printf("Fatorial de 10: %d\n", ft_recursive_factorial(10));
    return (0);
}*/
