/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:45:36 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/24 12:48:05 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
    printf("2 é primo? %d\n", ft_is_prime(2));
    printf("3 é primo? %d\n", ft_is_prime(3));
    printf("4 é primo? %d\n", ft_is_prime(4));
    printf("17 é primo? %d\n", ft_is_prime(17));
    printf("18 é primo? %d\n", ft_is_prime(18));
    printf("0 é primo? %d\n", ft_is_prime(0));
    printf("1 é primo? %d\n", ft_is_prime(1));
    return (0);
}*/
