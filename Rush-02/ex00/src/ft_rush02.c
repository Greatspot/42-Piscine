/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 19:51:43 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/08/03 19:51:48 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int ft_atoi(char *str)
{
    int result = 0;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;
    while (i < n && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
        dest[i++] = '\0';
    return (dest);
}

char *ft_strdup(char *src)
{
    char *dup;
    int len = 0;
    while (src[len])
        len++;
    dup = (char *)malloc(sizeof(char) * (len + 1));
    if (!dup)
        return (NULL);
    ft_strncpy(dup, src, len + 1);
    return (dup);
}
