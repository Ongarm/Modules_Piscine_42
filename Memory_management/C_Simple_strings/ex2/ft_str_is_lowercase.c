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
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("minuscule"));
	printf("%d\n", ft_str_is_lowercase("MAJUSCULE"));
	printf("%d\n", ft_str_is_lowercase("LesDeux"));
	printf("%d\n", ft_str_is_lowercase("Les 2"));
	printf("%d\n", ft_str_is_lowercase(""));
	return (0);
}
*/
