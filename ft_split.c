/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 02:54:06 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/06 21:25:54 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int	count(char	const *s, char	c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	if (!s)
		return (0);
	if (s[i] != c)
	{
		i++;
		words++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			words++;
		i++;
	}
	return (words);
}

static char	*string(char	const *s, char	c)
{
	char	*word;
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char	*)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char	const *s, char	c)
{
	char	**split;
	int	num;
	int	i;

	if (!s)
		return (0);
	num = count(s, c);
	split = (char **)malloc (sizeof(char *) * num + 1);
	if (!split)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			split[i] = string(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	split[i] = 0;
	return (split);
}
