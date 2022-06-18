/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 01:48:51 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/18 12:49:52 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*s1;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start || len == 0)
		return (ft_strdup(""));
	if (strlen(s) - start < len)
		len = strlen(s) - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	s1 = str;
	i = 0;
	while (s[i] && i < len)
	{
		s1[i] = s[i + start];
		i++;
	}
	s1[i] = '\0';
	return (str);
}
