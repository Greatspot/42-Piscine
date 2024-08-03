/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:43:06 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/11 15:28:18 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 
/* enables the write function of the C library  */

void	ft_is_negative(int n)
{
	char	doll;

	doll = 'P';
	if (n < 0)
	{
		doll = 'N';
	}
	write(1, &doll, 1);
}
/*
int	main(void)
{
	ft_is_negative(89);
	return (0);
}
*/
