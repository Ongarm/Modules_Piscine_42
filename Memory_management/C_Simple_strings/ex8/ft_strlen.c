/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:50:33 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/20 23:22:27 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	ch1[] = "T";
	char	ch2[] = "Te\nst";
	char	ch3[] = "";

	printf("%d\n", ft_strlen(ch1));
	printf("%d\n", ft_strlen(ch2));
	printf("%d\n", ft_strlen(ch3));
	return (0);
}
*/
