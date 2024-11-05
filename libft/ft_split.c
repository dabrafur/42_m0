/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:56:16 by deabraha          #+#    #+#             */
/*   Updated: 2024/11/05 13:08:13 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	w_count(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*w_alloc(const char *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, (len + 1));
	return (word);
}

static int	free_split(char **split, int i)
{
	while (i > 0)
		free(split[--i]);
	free(split);
	return (0);
}

static int	fill_split(char **split, const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			split[i] = w_alloc(s, c);
			if (!split[i])
				return (free_split(split, i));
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	*split;
	int		words;

	if (!s)
		return (NULL);
	words = w_count(s, c);
	split = (char **)malloc((words +1) * sizeof(char *));
	if (!split)
		return (NULL);
	if (!fill_split(split, s, c))
		return (NULL);
	return (split);
}
