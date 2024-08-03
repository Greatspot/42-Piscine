/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:19:22 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/17 15:19:36 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[10];
	char	src1[10];
	char	dest[20];
	char	dest1[20];

	strcpy(src, "beautiful");
	strcpy(src1, "beautiful");
	printf("%s", ft_strcpy(dest, src));
	printf("\n%s", strcpy(dest1, src1));
	return (0);
}
*/
