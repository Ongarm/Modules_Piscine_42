/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 22:08:15 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/14 01:00:38 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	ft_putchar(48 + (n / 10));
	ft_putchar(48 + (n % 10));
}

void	ft_print_comb2(void)
{
	int	ud;
	int	tq;

	ud = 0;
	while (ud <= 98)
	{
		tq = ud +1;
		while (tq <= 99)
		{
			ft_putnbr(ud);
			ft_putchar(' ');
			ft_putnbr(tq);
			if (ud != 98)
			{
				write(1, ", ", 2);
			}
			tq = tq + 1;
		}
		ud = ud + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
