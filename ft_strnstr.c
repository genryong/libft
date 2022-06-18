/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 00:20:20 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/15 04:00:08 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t len)
{
	size_t	nlen;
	size_t	i;

	if (!haystack)
		ft_memset(NULL, 1, 1);
	nlen = ft_strlen(needle);
	if (!nlen)
		return ((char *)haystack);
	i = 0;
	while (i + nlen <= len && *(haystack + i))
	{
		if (!ft_strncmp(haystack + i, needle, nlen))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
