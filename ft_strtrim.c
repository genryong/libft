/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:14:39 by genryongfa        #+#    #+#             */
/*   Updated: 2022/07/13 15:23:14 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (start <= end && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr((char *)s1, start, end - start + 1));
}

// int main(void)
// {
// 	char s1[] = "aaabaabcd";
// 	char str[] = "abcdef";

// 	printf("%s\n", ft_strtrim(s1, str));

// 	return (0);
// }
