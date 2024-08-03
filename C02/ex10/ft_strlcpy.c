/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:16:28 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/17 19:22:14 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char src[] = "Hello, World!";
	char dest[20];
	unsigned int size = 10;
	unsigned int len;

	len = ft_strlcpy(dest, src, size);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	printf("Length: %u\n", len);
	return (0);
}
*/
