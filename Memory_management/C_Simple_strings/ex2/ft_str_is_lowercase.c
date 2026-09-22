/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 17:30:19 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/20 15:37:20 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
			i ++;
		else
			return (0);
	}
	return (1);
}

int    main(int argc, char **argv)
{
    if (argc == 2)
        printf("%d\n", ft_str_is_lowercase(argv[1]));
    return (0);
}
