/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 12:37:13 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/29 12:07:11 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char **str, int size)
{
	int	res;
	int	i;
	int	j;

	i = -1;
	res = 0;
	while (++i < size)
	{
		j = -1;
		while (str[i][++j] != '\0')
			res++;
	}
	return (res);
}

int	sep_len(char *sep)
{
	int	r;
	int	i;

	i = -1;
	r = 0;
	while (sep[++i])
		r++;
	return (r);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*allocate_memory(int size, char **strs, char *sep)
{
	char	*join;
	int		len;

	if (size)
	{
		len = ft_strlen(strs, size) + (sep_len(sep) * (size - 1));
		join = (char *)malloc(sizeof(char) * (len + 1));
		if (!join)
			return (0);
	}
	else
	{
		join = (char *)malloc(sizeof(char));
		if (!join)
			return (0);
		join[0] = '\0';
	}
	return (join);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;

	join = allocate_memory(size, strs, sep);
	if (!join)
		return (0);
	i = -1;
	*join = 0;
	while (++i < size)
	{
		join = ft_strcat(join, strs[i]);
		if (i + 1 != size)
			ft_strcat(join, sep);
	}
	return ((ft_strcat(join, "\0")));
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"ola", "escola", "42"};
	char	*sep = " ";
	char	*result;

	result = ft_strjoin(3, strs, sep);
	if (result != NULL)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}*/
