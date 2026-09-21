/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 04:53:18 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/14 05:04:47 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power -1));
}

int    main(int argc, char **argv)
{
    if (argc == 3)
        printf("%s puissance %s font %d\n", argv[1], argv[2], ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
    return (0);
}
