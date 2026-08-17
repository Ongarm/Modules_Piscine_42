/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 04:53:18 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/14 05:04:47 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power -1));
	}
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(0, 5));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(4, 3));
	printf("%d\n", ft_recursive_power(2, 5));
	printf("%d\n", ft_recursive_power(5, 2));
	printf("%d\n", ft_recursive_power(5, 0));
	printf("%d\n", ft_recursive_power(3, -1));
	return (0);
}
*/
