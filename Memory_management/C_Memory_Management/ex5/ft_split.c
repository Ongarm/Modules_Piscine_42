/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougear <mbougear@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 04:36:39 by mbougear          #+#    #+#             */
/*   Updated: 2026/08/28 02:02:03 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *sep)
{
	if (sep == NULL || *sep == '\0')
		return (0);
	if (c == *sep)
		return (1);
	return (ft_is_sep(c, sep + 1));
}

int	ft_wordlen(char *str, char *sep)
{
	if (str == NULL || *str == '\0' || ft_is_sep(*str, sep))
		return (0);
	return (1 + ft_wordlen(str + 1, sep));
}

int	ft_word_count(char *str, char *sep)
{
	int	m;
	int	i;

	if (str == NULL || *str == '\0')
		return (0);
	i = 0;
	m = 0;
	if (!ft_is_sep(*str, sep))
		m++;
	while (str[i])
	{
		if (ft_is_sep(str[i], sep) && str[i + 1] && !ft_is_sep(str[i + 1], sep))
			m++;
		i++;
	}
	return (m);
}

void	ft_worddup(char *dup, char *src, char *sep)
{
	int	i;

	i = 0;
	while (src[i] && !ft_is_sep(src[i], sep))
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		m;

	strs = malloc(sizeof(char *) * (ft_word_count(str, charset) + 1));
	if (strs == NULL)
		return (NULL);
	i = 0;
	m = 0;
	while (m < (ft_word_count(str, charset)))
	{
		while (str[i] && ft_is_sep(str[i], charset))
			i++;
		strs[m] = malloc(sizeof(char) * (ft_wordlen(str + i, charset) + 1));
		if (strs[m] == NULL)
			return (NULL);
		ft_worddup(strs[m], str + i, charset);
		if (strs[m][0] == '\0')
			return (NULL);
		while (str[i] && !ft_is_sep(str[i], charset))
			i++;
		m++;
	}
	strs[m] = NULL;
	return (strs);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	**test;
	int		i;

	if (argc == 3)
	{
		test = ft_split(argv[1], argv[2]);
		i = 0;
		while (test[i])
		{
			printf("%s", test[i]);
			printf("\n");
			free(test[i]);
			i++;
		}
		free(test);
	}
	return (0);
}
*/
