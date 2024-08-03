/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:11:18 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/24 18:29:17 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (is_in_charset(*str, charset))
			in_word = 0;
		str++;
	}
	return (count);
}

char	*copy_word(char *str, char *charset)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (str[len] && !is_in_charset(str[len], charset))
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		words;
	int		i;

	words = count_words(str, charset);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			result[i] = copy_word(str, charset);
			i++;
			while (*str && !is_in_charset(*str, charset))
				str++;
		}
		else
			str++;
	}
	result[i] = 0;
	return (result);
}
/* Função principal para testar ft_split*/
/*
int	main(void)
{
    char	*str = "ola escola 42! e apenas um teste.";
    char	*charset = " ";
    char	**result;
    int		i;

    result = ft_split(str, charset);
    i = 0;
    while (result[i])
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return (0);
}*/
