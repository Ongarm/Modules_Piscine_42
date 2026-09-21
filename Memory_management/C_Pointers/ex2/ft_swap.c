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

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc == 3)
    {
        x = atoi(argv[1]);
        y = atoi(argv[2]);
        printf("%d %d\n", x, y);
        ft_swap(&x, &y);
        printf("%d %d\n", x, y);
    }
	return (0);
}
