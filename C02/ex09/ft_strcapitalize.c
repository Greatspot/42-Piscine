/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:00:25 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/18 15:53:04 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a'
			&& c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && new_word)
			str[i] = str[i] - 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && !new_word)
			str[i] = str[i] + 32;
		new_word = !is_alphanumeric(str[i]);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: %s <string>\n", argv[0]);
		return (1);
	}
	printf("Original string: %s\n", argv[1]);
	printf("Capitalized string: %s\n", ft_strcapitalize(argv[1]));
	return (0);
}
*/
