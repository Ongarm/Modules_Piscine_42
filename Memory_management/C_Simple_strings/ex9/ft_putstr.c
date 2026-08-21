/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 20:14:28 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/20 23:52:55 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr("Test.");
	ft_putstr("\n");
	ft_putstr("Te\nst.");
	ft_putstr("\n");
	ft_putstr("T");
	ft_putstr("\n");
	ft_putstr("");
	ft_putstr("\n");
	return (0);
}
*/
