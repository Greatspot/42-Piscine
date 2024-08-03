/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:53:40 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/08/03 15:43:51 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int start;
    int end;

    start = 0;
    end = size - 1;
    while (start < end)
    {
        temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;
        start++;
        end--;
    }
}
/*
#include <stdio.h>
int main()
{
    int tab[] = {1, 3, 7, 9};
    int i;
    i = 0;
    while(i<4)
        {
            printf("%d\n", tab[i]);
            i++;
        }
    ft_rev_int_tab(tab, 4);
    i = 0;
      while(i<4)
          {
              printf("%d\n", tab[i]);
              i++;
          }
}*/
