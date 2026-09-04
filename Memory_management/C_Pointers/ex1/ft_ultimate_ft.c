/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 21:13:41 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/17 21:29:38 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	a;
	int	*b;
	int	**c;
	int	***d;
	int	****e;
	int	*****f;
	int	******g;
	int	*******h;
	int	********i;

	if (argc == 2)
    {
        a = atoi(argv[1]);
        b = &a;
        c = &b;
        d = &c;
        e = &d;
        f = &e;
        g = &f;
        h = &g;
        i = &h;
        printf("%d\n", a);
        ft_ultimate_ft(&i);
        printf("%d\n", a);
    }
    return (0);
}
