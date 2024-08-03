/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:45:18 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/24 12:43:46 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int main(void)
{
    printf("Raiz quadrada de 16: %d\n", ft_sqrt(16));
    printf("Raiz quadrada de 25: %d\n", ft_sqrt(25));
    printf("Raiz quadrada de 26: %d\n", ft_sqrt(26));
    printf("Raiz quadrada de -4: %d\n", ft_sqrt(-4));
    printf("Raiz quadrada de 2147395600: %d\n", ft_sqrt(2147395600));
    return (0);
}*/
