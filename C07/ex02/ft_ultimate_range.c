/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:05:45 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/24 16:54:01 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>

int	main(void)
{
    int	min = 5;
    int	max = 10;
    int	*range;
    int	size;
    int	i;

    size = ft_ultimate_range(&range, min, max);
    if (size > 0)
    {
        i = 0;
        while (i < size)
        {
            printf("%d ", range[i]);
            i++;
        }
        printf("\n");
        free(range);
    }
    else if (size == 0)
    {
        printf("Intervalo inválido.\n");
    }
    else
    {
        printf("Erro de alocação de memória.\n");
    }
    return (0);
}*/
