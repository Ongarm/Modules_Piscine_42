/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 23:06:12 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/19 00:42:19 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	t;

	if (size <= 1)
		return ;
	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab [j])
			{
				t = tab[i];
				tab[i] = tab[j];
				tab[j] = t;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[8] = {42, 1997, 29, 1, 75010, 4, 2, 17};
	int	i;

	i = 0;
	while (i < 8)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, 8);
	i = 0;
	while (i < 8)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
