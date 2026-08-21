/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 20:46:40 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/21 00:12:57 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hd;

	i = 0;
	hd = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			write(1, &hd[str[i] / 16], 1);
			write(1, &hd[str[i] % 16], 1);
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Je fais une Yellow ce soir,");
	write(1, "\n", 1);
	ft_putstr_non_printable("ca te dirait de...\vpas venir ?");
	write(1, "\n", 1);
	ft_putstr_non_printable("");
	write(1, "\n", 1);
	return (0);
}
*/
