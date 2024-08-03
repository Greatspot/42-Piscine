/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 19:51:54 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/08/03 19:51:58 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 4096

long long ft_atoll(char *str)
{
    long long result = 0;
    int sign = 1;

    while (isspace((unsigned char)*str))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (sign * result);
}

int count_keys(char *buffer)
{
    int count = 0;
    char *ptr = buffer;

    while (*ptr)
    {
        if (*ptr == '\n')
            count++;
        ptr++;
    }
    return count;
}

char *trim_whitespace(char *str)
{
    char *end;

    while (isspace((unsigned char)*str))
        str++;
    if (*str == 0)
        return str;

    end = str + strlen(str) - 1;
    while (end > str && isspace((unsigned char)*end))
        end--;
    end[1] = '\0';

    return str;
}

int parse_dict(char *dict_path, t_dict **dict)
{
    int fd;
    char buffer[BUFFER_SIZE];
    int bytes_read;
    char *line;
    int i = 0;

    fd = open(dict_path, O_RDONLY);
    if (fd < 0)
        return (-1);

    bytes_read = read(fd, buffer, BUFFER_SIZE);
    if (bytes_read < 0)
    {
        close(fd);
        return (-1);
    }
    buffer[bytes_read] = '\0';
    close(fd);

    int key_count = count_keys(buffer);
    *dict = malloc(sizeof(t_dict) * (key_count + 1));

    line = strtok(buffer, "\n");
    while (line != NULL)
    {
        char *colon = strchr(line, ':');
        if (colon)
        {
            *colon = '\0';
            (*dict)[i].key = ft_atoll(trim_whitespace(line));
            (*dict)[i].value = ft_strdup(trim_whitespace(colon + 1));
            i++;
        }
        line = strtok(NULL, "\n");
    }
    (*dict)[i].key = -1;
    (*dict)[i].value = NULL;
    return (0);
}

void print_number(long long num, t_dict *dict)
{
    int i = 0;
    while (dict[i].value)
    {
        if (dict[i].key == num)
        {
            ft_putstr(dict[i].value);
            return;
        }
        i++;
    }
    ft_putstr(DICT_ERROR);
}

void convert_number(char *num, t_dict *dict)
{
    long long number;
    int first = 1;

    if (strchr(num, '.'))
    {
        ft_putstr(ERROR);
        return;
    }

    number = ft_atoll(num);
    if (number == 0)
    {
        print_number(0, dict);
        ft_putstr("\n");
        return;
    }

    if (number < 0)
    {
        ft_putstr(ERROR);
        return;
    }

    if (number >= LLONG_MAX)
    {
        ft_putstr(DICT_ERROR);
        return;
    }

    long long parts[10] = {0};
    int index = 0;
    while (number > 0)
    {
        parts[index] = number % 1000;
        number /= 1000;
        index++;
    }

    while (--index >= 0)
    {
        if (parts[index] > 0)
        {
            if (!first)
                ft_putstr(" ");
            first = 0;
            if (parts[index] / 100 > 0)
            {
                print_number(parts[index] / 100, dict);
                ft_putstr(" ");
                print_number(100, dict);
                if (parts[index] % 100 > 0)
                    ft_putstr(" ");
            }
            if (parts[index] % 100 > 0)
            {
                print_number(parts[index] % 100, dict);
            }
            if (index > 0)
            {
                ft_putstr(" ");
                print_number(1000 * index, dict);
            }
        }
    }
    ft_putstr("\n");
}