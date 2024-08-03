/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 19:51:31 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/08/03 19:51:37 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
#define FT_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <ctype.h>
#include <limits.h>

#define DICT_ERROR "Dict Error\n"
#define ERROR "Error\n"

typedef struct s_dict
{
    long long key;
    char *value;
} t_dict;

void ft_putstr(char *str);
long long ft_atoll(char *str);
char *ft_strncpy(char *dest, char *src, unsigned int n);
char *ft_strdup(char *src);
int parse_dict(char *dict_path, t_dict **dict);
void convert_number(char *num, t_dict *dict);
char *trim_whitespace(char *str);

#endif
