/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 17:38:19 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/19 18:12:47 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
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
	printf("%d\n", ft_str_is_uppercase("minuscule"));
	printf("%d\n", ft_str_is_uppercase("MAJUSCULE"));
	printf("%d\n", ft_str_is_uppercase("LesDeux"));
	printf("%d\n", ft_str_is_uppercase("Les 2"));
	printf("%d\n", ft_str_is_uppercase(""));
	return (0);
}
*/
