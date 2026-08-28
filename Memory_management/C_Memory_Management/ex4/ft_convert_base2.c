/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:35:54 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/27 23:39:36 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= '\t' && base[i] <= '\r'))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_nbr_belongs_to_base(char *nbr, char *base)
{
	int	i;
	int	j;
	int	v;

	i = 0;
	if (*nbr == '-')
		i++;
	while (nbr[i])
	{
		j = 0;
		v = 0;
		while (base[j])
		{
			if (nbr[i] == base[j])
				v++;
			j++;
		}
		if (v != 1)
			return (0);
		i++;
	}
	return (1);
}

int	ft_checknbr(char *nbr, char *base)
{
	int	i;

	i = 0;
	while (nbr[i])
	{
		if (nbr[i] == ' ' || nbr[i] == '+' || (nbr[i] == '-' && i != 0)
			|| (nbr[i] >= '\t' && nbr[i] <= '\r'))
			return (0);
		i++;
	}
	if (!ft_nbr_belongs_to_base(nbr, base))
		return (0);
	return (1);
}

int	ft_is_negative(char *nbr)
{
	if (*nbr == '-')
		return (1);
	else
		return (0);
}
