/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 20:14:28 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/20 23:52:55 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
    write(1, str, i);
}

int    main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_putstr(argv[1]);
        ft_putstr("\n");
    }
    return (0);
}
