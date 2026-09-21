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

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(int argc, char **argv)
{
    int	q;
	int	r;
    
    if (argc == 3)
    {
        ft_div_mod(atoi(argv[1]), atoi(argv[2]), &q, &r);
        printf("%d %d\n", q, r);
    }
    return(0);
}
