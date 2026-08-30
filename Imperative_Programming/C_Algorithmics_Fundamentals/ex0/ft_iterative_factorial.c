/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 03:14:16 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/14 04:07:38 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	f;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	f = 1;
    i = 1;
    while (i <= nb)
    {
        f *= i;
        i++;
    }
    return (f);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
        printf("La factorielle de %d est %d.\n", atoi(argv[1]), ft_iterative_factorial(atoi(argv[1])));
    return (0);
}
