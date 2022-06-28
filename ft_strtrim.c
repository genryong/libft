/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:14:39 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/21 00:20:51 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	num_judge(char	const	s, char	const	*set)
{
	while (*set)
	{
		if (s == *set)
			return (1);
		set++;
	}
	return (0);
}

static	size_t	get_len(char	const	*s, char	const	*set)
{
	size_t	len;

	len = 0;
	while (num_judge(*s, set))
		s++;
	while (*s)
	{
		s++;
		len++;
	}
	s--;
	if (len)
	{
		while (num_judge(*s, set))
		{
			s--;
			len--;
		}
	}
	return (len);
}

char	*ft_strtrim(char	const *s1, char	const *set)
{
	char	*new;

	if (!s1 || !set)
		return (NULL);
	new = (char *)malloc(sizeof(char) * get_len(s1, set));
	if (!new)
		return (NULL);
	while (num_judge(*s1, set))
		s1++;
	ft_strlcpy(new, s1, get_len(s1, set) + 1);
	return (new);
}
