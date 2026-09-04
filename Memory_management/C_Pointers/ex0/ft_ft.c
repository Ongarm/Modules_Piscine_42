/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 20:57:24 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/19 13:54:20 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(int argc, char **argv)
{
    int     n;
    
    if (argc == 2)
    {
        n = atoi(argv[1]);
        printf("%d\n", n);
        ft_ft(&n);
        printf("%d\n", n);
    }
    return (0);
}
