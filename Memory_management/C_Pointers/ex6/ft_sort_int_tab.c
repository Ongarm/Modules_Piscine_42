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

#include <stdio.h>
#include <stdlib.h>

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

int	main(int argc, char **argv)
{
	int	*tab;
	int	i;

    if(argc >= 3)
    {
        i = 0;
        while (i < argc - 1)
        {
            tab[i] = atoi(argv[i + 1]);
            i++;
        }
        ft_sort_int_tab(tab, argc - 1);
        i = 0;
        while (i < argc - 1)
        {
            printf("%d", tab[i]);
            i++;
            if (i < argc - 1)
                printf(" ");
        }
        printf("\n");
    }
	return (0);
}
