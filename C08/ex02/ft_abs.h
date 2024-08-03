/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <rcunha-l@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:42:54 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/25 19:37:56 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

# define ABS abs
# define EVEN even

#endif
