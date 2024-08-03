/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:46:01 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/24 12:52:44 by rcunha-l         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int main(void)
{
    printf("Próximo primo >= 14: %d\n", ft_find_next_prime(14));
    printf("Próximo primo >= 17: %d\n", ft_find_next_prime(17));
    printf("Próximo primo >= 18: %d\n", ft_find_next_prime(18));
    printf("Próximo primo >= 0: %d\n", ft_find_next_prime(0));
    printf("Próximo primo >= -5: %d\n", ft_find_next_prime(-5));
    return (0);
}*/
