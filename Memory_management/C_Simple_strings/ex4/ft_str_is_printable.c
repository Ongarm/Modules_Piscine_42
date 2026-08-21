/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 19:26:16 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/20 23:37:44 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{	
	printf("%d\n", ft_str_is_printable("tabulation"));
	printf("%d\n", ft_str_is_printable("	tabulation	"));
	printf("%d\n", ft_str_is_printable("espace"));
	printf("%d\n", ft_str_is_printable(" espace "));
	printf("%d\n", ft_str_is_printable("/barre oblique/"));
	printf("%d\n", ft_str_is_printable("nouvelle ligne"));
	printf("%d\n", ft_str_is_printable("\nnouvelle ligne\n"));
	printf("%d\n", ft_str_is_printable("\\barre oblique inverse\\"));
	printf("%d\n", ft_str_is_printable(""));
	return (0);
}
*/
