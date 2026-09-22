/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:29:41 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/27 23:47:54 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int    ft_checkbase(char *base)
{
    int    i;
    int    j;

    if (ft_strlen(base) < 2)
        return (0);
    i = 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || (base[i] >= '\t' && base[i] <= '\r'))
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

int    ft_nbr_belongs_to_base(char *nbr, char *base)
{
    int    i;
    int    j;
    int    v;

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

int    ft_checknbr(char *nbr, char *base)
{
    int    i;

    i = 0;
    while (nbr[i])
    {
        if (nbr[i] == ' ' || nbr[i] == '+' || (nbr[i] == '-' && i != 0) || (nbr[i] >= '\t' && nbr[i] <= '\r'))
            return (0);
        i++;
    }
    if (!ft_nbr_belongs_to_base(nbr, base))
        return (0);
    return (1);
}

int    ft_is_negative(char *nbr)
{
    if (*nbr == '-')
        return (1);
    else
        return (0);
}


int	ft_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_base_to_dec(char *nbr, char *base)
{
	int	s;
	int	dec;
	int	i;

	s = 1;
	if (ft_is_negative(nbr))
	{
		s = -s;
		nbr++;
	}
	dec = 0;
	i = 0;
	while (nbr[i])
	{
		dec = dec * ft_strlen(base) + ft_value(nbr[i], base);
		i++;
	}
	dec *= s;
	return (dec);
}

int	ft_nbr_nbr(int dec, char *base)
{
	int	q;
	int	i;

	if (dec < 0)
		dec *= -1;
	q = dec / ft_strlen(base);
	i = 1;
	while (q > 0)
	{
		q /= ft_strlen(base);
		i++;
	}
	return (i);
}

char	*ft_dec_to_base(int dec, char *base)
{
	char	*nbrf;
	int		size;

	size = ft_nbr_nbr(dec, base);
	if (dec < 0)
		size++;
	nbrf = malloc(sizeof(char) * (size + 1));
	if (nbrf == NULL)
		return (NULL);
	nbrf[size] = '\0';
	if (dec == 0)
	{
		*nbrf = *base;
		return (nbrf);
	}
	if (dec < 0)
	{
		*nbrf = '-';
		dec *= -1;
	}
	while (dec > 0)
	{
		nbrf[size - 1] = base[dec % ft_strlen(base)];
		dec /= ft_strlen(base);
		size--;
	}
	return (nbrf);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		dec;
	char	*nbrf;

	if (!ft_checkbase(base_from))
		return (NULL);
	if (!ft_checkbase(base_to))
		return (NULL);
	if (!ft_checknbr(nbr, base_from))
		return (NULL);
	dec = ft_base_to_dec(nbr, base_from);
	nbrf = ft_dec_to_base(dec, base_to);
	return (nbrf);
}

int	main(int argc, char **argv)
{
	char	*test;

	if (argc == 4)
	{
		test = ft_convert_base(argv[1], argv[2], argv[3]);
		printf("%s", test);
		printf("\n");
		free(test);
	}
	return (0);
}
