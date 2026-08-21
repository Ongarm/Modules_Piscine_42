/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 19:51:48 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/21 00:07:56 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	chaine1[] = "minuscule";
	char	chaine2[] = "Exam le 28/08/2026";
	char	chaine3[] = "28/08/2026";
	char	chaine4[] = "";

	printf("%s\n", ft_strupcase(chaine1));
	printf("%s\n", ft_strupcase(chaine2));
	printf("%s\n", ft_strupcase(chaine3));
	printf("%s\n", ft_strupcase(chaine4));
	return (0);
}
*/
