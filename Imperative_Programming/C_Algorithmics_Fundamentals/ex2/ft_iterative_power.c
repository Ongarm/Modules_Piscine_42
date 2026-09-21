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

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	r;
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 2;
	r = nb;
	while (i <= power)
	{
		r *= nb;
		i++;
	}
	return (r);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
        printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
