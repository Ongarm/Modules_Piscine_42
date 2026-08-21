/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:03:08 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/21 00:09:40 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	chaine1[] = "MAJUSCULE";
	char	chaine2[] = "Exam le 28/08/2026";
	char	chaine3[] = "28/08/2026";
	char	chaine4[] = "";

	printf("%s\n", ft_strlowcase(chaine1));
	printf("%s\n", ft_strlowcase(chaine2));
	printf("%s\n", ft_strlowcase(chaine3));
	printf("%s\n", ft_strlowcase(chaine4));
	return (0);
}
*/
