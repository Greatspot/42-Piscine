/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:47:25 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/08/03 15:43:36 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "Hello, 42!";
	int	length;

	length = ft_strlen(str);
	printf("%d", ft_strlen(str));
	return (0);
}*/
