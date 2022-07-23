/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 00:20:20 by genryongfa        #+#    #+#             */
/*   Updated: 2022/07/13 14:03:33 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;
	char	*h;
	
	if (haystack == NULL)
		return (NULL);
	h = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0)
		return (h);
	i = 0;
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i] != '\0' && needle[j] != '\0' 
				&& h[i + j] == needle[j] && i + j < len)
			j++;
		if (n_len == j)
			return (h + i);
		i++;
	}
	return (NULL);
}

// int main (void)
// {
// 	char h[30] = "aaabcabcd";
// 	char n[] = "a";
	
// 	ft_strnstr(h, "a", -1);

// 	printf("%s\n", h);

// 	strnstr(h, "a", -1);

// 	printf("%s\n", h);

// 	return (0);
// }

