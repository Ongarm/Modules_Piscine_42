/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 04:24:16 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/14 04:49:02 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;
	int	i;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	i = 2;
	r = nb;
	while (i <= power)
	{
		r = nb * r;
		i = i + 1;
	}
	return (r);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(0, 5));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(4, 3));
	printf("%d\n", ft_iterative_power(2, 5));
	printf("%d\n", ft_iterative_power(5, 2));
	printf("%d\n", ft_iterative_power(5, 0));
	printf("%d\n", ft_iterative_power(3, -1));
	return (0);
}
*/
