/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:05:54 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/16 15:42:19 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>
  int main()
  {
      int tab[] = {9, 3, 1, 9};
      int i;
      i = 0;
      while(i<4)
          {
              printf("%d\n", tab[i]);
              i++;
          }
      ft_sort_int_tab(tab, 4);
      i = 0;
        while(i<4)
            {
                printf("%d\n", tab[i]);
                i++;
            }
  }


/*
int	main(void)
{
	int arr[] = {5, 2, 4, 3, 1};
	int size = 5;
	int i;

	ft_sort_int_tab(arr, size);

	for (i = 0; i < size; i++)
	{
		char c = arr[i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
	}
	return (0);
}
*/
