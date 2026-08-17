/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 21:40:15 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/17 21:53:05 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 6;
	y = 7;
	printf("%d %d\n", x, y);
	ft_swap(&x, &y);
	printf("%d %d\n", x, y);
	return (0);
}
*/
