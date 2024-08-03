/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:39:45 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/19 20:06:22 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	*src;
	char	dest[50];

	src = "Hello 42";
	printf("base: %s\n", src);
	printf("before copy: %s\n", dest);
	ft_strncpy(dest, src, 12);
	printf("after copy: %s\n", dest);

	return (0);
}
*/
