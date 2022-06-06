/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 00:20:20 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/06 19:47:52 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t len)
{
	size_t i;
	size_t j;

	
	if (!haystack || !needle)
		return (0);
	if (!needle || needle[0])
		return ((char *)haystack);
	
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (!haystack[i + j] && needle[j] && i + j < len && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char*)(haystack + i));
		i++;
	}
	return (0);
}