/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 02:54:06 by genryongfa        #+#    #+#             */
/*   Updated: 2022/07/22 01:36:53 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int	count(char	const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			words++;
		i++;
	}
	return (words);
}

static	void	*free_str(char	**str, size_t	n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**split(char	**str, const char	*s, char c, size_t n_str)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (i < n_str)
	{
		len = 0;
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
		{
			len++;
			j++;
		}
		str[i] = (char *)malloc(sizeof(char) * len + 1);
		if (!str[i])
			return (free_str(str, i));
		ft_strlcpy(str[i], &s[j - len], len + 1);
		i++;
	}
	return (str);
}

char	**ft_split(char	const *s, char c)
{
	char	**str;
	size_t	n_str;

	if (!s)
		return (NULL);
	n_str = count(s, c);
	str = (char **)malloc(sizeof(char *) * (n_str + 1));
	if (!str)
		return (NULL);
	str = split(str, s, c, n_str);
	if (!str)
		return (NULL);
	str[n_str] = NULL;
	return (str);
}

// int				main(void)
// {
// 	char	**tab;
// 	unsigned int	i;

// 	i = 0;
// 	tab = ft_split("AAbbBBbbCC", 'b');
// 	if (!tab[0])
// 		ft_putendl_fd("ok\n", 1);
// 	while (tab[i] != NULL)
// 	{
// 		ft_putendl_fd(tab[i], 1);
// 		i++;
// 	}
// }