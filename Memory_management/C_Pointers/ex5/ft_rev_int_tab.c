/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 18:47:31 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/19 00:35:33 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	if (size <= 1)
		return ;
	i = 0;
	while (i < size / 2)
	{
		t = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = t;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tabp[6] = {1, 2, 3, 4, 5, 6};
	int	tabi[7] = {1, 2, 3, 4, 5, 6, 7};
	int x;

	for (x = 0 ; x < 6 ; x = x + 1)
	{
		printf("%d", tabp[x]);
	}
	printf("\n");
	ft_rev_int_tab(tabp, 6);
	for (x = 0 ; x < 6 ; x = x + 1)
	{
		printf("%d", tabp[x]);
	}
	printf("\n");
	for (x = 0 ; x < 7 ; x = x + 1)
	{
		printf("%d", tabi[x]);
	}
	printf("\n");
	ft_rev_int_tab(tabi, 7);
	for (x = 0 ; x < 7 ; x = x + 1)
	{
		printf("%d", tabi[x]);
	}
	printf("\n");
	return (0);
}
*/
