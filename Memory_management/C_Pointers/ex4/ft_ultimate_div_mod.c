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

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	q;
	int	r;

	q = *a / *b;
	r = *a % *b;
	*a = q;
	*b = r;
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc == 3)
    {
        x = atoi(argv[1]);
        y = atoi(argv[2]);
        ft_ultimate_div_mod(&x, &y);
        printf("%d %d\n", x, y);
    }
    return (0);
}
