/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:41:39 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/08/03 15:42:24 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
/*
#include <stdio.h>
int	main(void)
{
    int x;
    int y;
    x = 42;
    y = 24;
    printf("%d", x);
    printf("%d", y);

    ft_swap(&x, &y);
    printf("%d", x);
     printf("%d", y);


    return (0);
}*/
