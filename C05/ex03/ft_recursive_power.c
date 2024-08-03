/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:42:28 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/24 11:50:29 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main(void)
{
    printf("2^3 = %d\n", ft_recursive_power(2, 3));
    printf("5^0 = %d\n", ft_recursive_power(5, 0));
    printf("0^0 = %d\n", ft_recursive_power(0, 0));
    printf("2^-3 = %d\n", ft_recursive_power(2, -3));
    return (0);
}*/
