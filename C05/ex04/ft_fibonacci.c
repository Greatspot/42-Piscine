/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:42:32 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/24 11:56:36 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main(void)
{
    printf("Fibonacci de 0: %d\n", ft_fibonacci(0));
    printf("Fibonacci de 1: %d\n", ft_fibonacci(1));
    printf("Fibonacci de 2: %d\n", ft_fibonacci(2));
    printf("Fibonacci de 3: %d\n", ft_fibonacci(3));
    printf("Fibonacci de 4: %d\n", ft_fibonacci(4));
    printf("Fibonacci de 10: %d\n", ft_fibonacci(10));
    printf("Fibonacci de -3: %d\n", ft_fibonacci(-3));
    return (0);
}*/
