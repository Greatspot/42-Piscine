/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:22:14 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/08/03 15:43:23 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "Hello, 42!";

	ft_putstr(str);
	return (0);
}*/
