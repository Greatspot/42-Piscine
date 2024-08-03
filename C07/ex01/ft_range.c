/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:04:39 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/24 16:33:22 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
    int	min = 5;
    int	max = 10;
    int	*range;
    int	i;

    range = ft_range(min, max);
    if (range != NULL)
    {
        i = 0;
        while (i < max - min)
        {
            printf("%d ", range[i]);
            i++;
        }
        printf("\n");
        free(range);
    }
    else
    {
        printf("Pointer nulo retornado.\n");
    }
    return (0);
}*/
