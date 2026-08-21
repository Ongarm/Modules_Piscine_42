/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:32:38 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/21 01:42:11 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (str[i - 1] < '0'
				|| (str[i - 1] > '9' && str[i - 1] < 'A')
				|| (str[i - 1] > 'Z' && str[i - 1] < 'a')
				|| str[i - 1] > 'z'))
			str[i] -= 32;
		if ((str[i] >= 'A' && str[i] <= 'Z')
			&& ((str[i - 1] >= '0' && str[i - 1] <= '9')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	chaine1[] = "test";
	char	chaine2[] = "TEST";
	char	chaine3[] = "tEsT";
	char	chaine4[] = "Hi\nhow are yOu? 42WoRds foRty-two; fiFty+and+oNe";
	char	chaine5[] = "";
	char	chaine6[] = "]s}Rb\\u00bY";
	
	ft_strcapitalize(chaine1);
	ft_strcapitalize(chaine2);
	ft_strcapitalize(chaine3);
	ft_strcapitalize(chaine4);
	ft_strcapitalize(chaine5);
	ft_strcapitalize(chaine6);
	printf("%s\n", chaine1);
	printf("%s\n", chaine2);
	printf("%s\n", chaine3);
	printf("%s\n", chaine4);
	printf("%s\n", chaine5);
	printf("%s\n", chaine6);
	return (0);
}
*/
