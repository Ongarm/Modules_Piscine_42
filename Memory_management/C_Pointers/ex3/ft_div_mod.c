/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 22:10:02 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/17 22:29:38 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	q;
	int	r;
	ft_div_mod(42, 5, &q, &r);
	printf("Le resultat donne %d pour quotient et %d pour reste.\n", q, r);
	return(0);
}
*/
