/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 20:55:32 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/28 03:56:17 by mbougear         ###   ########.fr       */
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

int	ft_char_count(char **strs)
{
    int i;
    int c;
    
    i = 0;
    c = 0;
    while (strs[i])
    {
        c += ft_strlen(strs[i]);
        i++;
    }
    return (c);
}

char	*ft_add_str(char *base, char *add)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(base);
	while (add [i])
	{
		base[j] = add[i];
		i++;
		j++;
	}
	base[j] = '\0';
	return (base);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strf;
	int		i;

	if (size <= 0 || strs == NULL)
	{
		strf = malloc(sizeof(char));
		if (strf == NULL)
			return (NULL);
		*strf = '\0';
		return (strf);
	}
	strf = malloc(ft_char_count(strs) + (size - 1) * ft_strlen(sep) + 1);
	if (strf == NULL)
		return (NULL);
	*strf = '\0';
	i = 0;
	while (i < size)
	{
		ft_add_str(strf, strs[i]);
		i++;
		if (i < size)
			ft_add_str(strf, sep);
	}
	return (strf);
}

int	main(int argc, char **argv)
{
	char	*test;

	if (argc > 2)
	{
		test = ft_strjoin(argc - 2, argv + 2, argv[1]);
		printf("%s", test);
		printf("\n");
		free(test);
	}
	return (0);
}
