/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 19:51:52 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/26 02:43:15 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	t;
	int	i;
	int	v;

	t = max - min;
	if (t <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * t);
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	v = min;
	while (i < t)
	{
		(*range)[i] = v;
		i++;
		v++;
	}
	return (t);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	*test;
	int	b;
	int	h;
	int	j;

	if (argc == 3)
	{
		test = NULL;
		b = atoi(argv[1]);
		h = atoi(argv[2]);
		printf("Distance = %d", ft_ultimate_range(&test, b, h));
		printf("\n");
		j = 0;
		while (j < (h - b))
		{
			printf("%d", test[j]);
			printf("\n");
			j++;
		}
		free(test);
	}
	return (0);
}
*/
