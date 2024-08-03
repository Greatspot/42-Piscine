/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:38:28 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/21 18:31:45 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign = -sign;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	char	test1[] = " ---+--+1234ab567";
	char	test2[] = "   +456";
	char	test3[] = "  -789";
	char	test4[] = "42";
	char	test5[] = " \t\n\v\f\r  1234";

	printf("Resultado para '%s': %d\n", test1, ft_atoi(test1));
	printf("Resultado para '%s': %d\n", test2, ft_atoi(test2));
	printf("Resultado para '%s': %d\n", test3, ft_atoi(test3));
	printf("Resultado para '%s': %d\n", test4, ft_atoi(test4));
	printf("Resultado para '%s': %d\n", test5, ft_atoi(test5));

	return 0;
*/
