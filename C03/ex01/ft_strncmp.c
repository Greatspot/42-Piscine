/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:31:16 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/19 20:30:59 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "abcdef";
	char	str2[] = "abcxyz";

	printf("Resultado da comparação: %d\n", ft_strncmp(str1, str2, 3));
	printf("Resultado da comparação: %d\n", ft_strncmp(str1, str2, 6));
	return (0);
}
*/
