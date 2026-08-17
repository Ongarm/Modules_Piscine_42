/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 22:20:22 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/17 22:31:35 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	q;
	int	r;

	q = *a / *b;
	r = *a % *b;
	*a = q;
	*b = r;
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 42;
	y = 5;
	ft_ultimate_div_mod(&x, &y);
	printf("Le resultat donne %d pour quotient et %d pour reste.\n", x, y);
	return (0);
}
*/
