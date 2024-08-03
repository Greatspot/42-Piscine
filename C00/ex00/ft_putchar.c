/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:06:08 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/14 18:06:19 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* creating a function to output characters*/
void	ft_putchar(char c)
/* this allows a character to be written with &c */
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_putchar('1');
	return (0);
}
*/
