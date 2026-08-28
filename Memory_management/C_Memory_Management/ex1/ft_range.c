/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:02:08 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/26 02:41:52 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	t;
	int	*tab;
	int	i;
	int	v;

	t = max - min;
	if (t <= 0)
		return (NULL);
	tab = malloc(sizeof(int) * t);
	if (tab == NULL)
		return (NULL);
	i = 0;
	v = min;
	while (i < t)
	{
		tab[i] = v;
		v++;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	*test;
	int	i;
	
	if (argc == 3)
	{	
		test = ft_range(atoi(argv[1]), atoi(argv[2]));
		i = 0;
		while (i < (atoi(argv[2]) - atoi(argv[1])))
		{
			printf("%d", test[i]);
			printf("\n");
			i++;
		}
		free(test);
	}
	return (0);
}
*/
