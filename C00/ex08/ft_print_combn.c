/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcunha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:19:48 by rcunha-l          #+#    #+#             */
/*   Updated: 2024/07/15 16:52:23 by rcunha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char	num[10];
	int		i;
	int		j;

	if (n <= 0 || n >= 10)
		return ;
	i = -1;
	while (++i < n)
		num[i] = '0' + i;
	while (1)
	{
		write(1, num, n);
		if (num[0] == '9' - n + 1 && num[n - 1] == '9')
			break ;
		ft_putchar(',');
		ft_putchar(' ');
		i = n - 1;
		while (i >= 0 && num[i] == '9' - n + 1 + i)
			i--;
		num[i]++;
		j = i;
		while (++j < n)
			num[j] = num[j - 1] + 1;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_combn(1);
	write(1, "\n\n", 2);
	ft_print_combn(2);
	write(1, "\n\n", 2);
	ft_print_combn(3);
	write(1, "\n\n", 2);
	ft_print_combn(4);
	write(1, "\n\n", 2);
	ft_print_combn(9);
	write(1, "\n", 1);
	return (0);
}
