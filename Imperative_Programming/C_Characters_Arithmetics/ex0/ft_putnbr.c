/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 17:50:28 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/13 23:44:07 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	r;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	r = 1;
	while ((nb / r) > 9)
	{
		r = r * 10;
	}
	while (r > 0)
	{
		ft_putchar('0' + (nb / r));
		nb = nb % r;
		r = r / 10;
	}
}
/*
int	main(void)
{
	ft_putnbr(42);
	return (0);
}
*/
