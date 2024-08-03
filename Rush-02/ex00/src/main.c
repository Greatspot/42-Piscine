/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 19:52:05 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/08/03 19:52:09 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int main(int argc, char **argv)
{
    t_dict *dict;

    if (argc < 2 || argc > 3)
    {
        ft_putstr(ERROR);
        return (1);
    }
    if (argc == 3)
    {
        if (parse_dict(argv[1], &dict) == -1)
        {
            ft_putstr(DICT_ERROR);
            return (1);
        }
        convert_number(argv[2], dict);
    }
    else
    {
        if (parse_dict("numbers.dict", &dict) == -1)
        {
            ft_putstr(DICT_ERROR);
            return (1);
        }
        convert_number(argv[1], dict);
    }
    return (0);
}
