/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 02:18:39 by genryongfa        #+#    #+#             */
/*   Updated: 2022/07/06 02:15:56 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;
	
	str = (char *)s;
	if ((char) c == '\0')
		return (&str[ft_strlen(str)]);
	while (*str)
	{
		if (*str == (char) c)
			return (str);
		str++;
	}
	return (NULL);
}

// int main()
// {
// 	char s[] = "abcdefg";

// 	printf ("%d\n", ft_strchr(s, '\0'));

// 	printf ("%d\n", strchr(s, '\0'));
// }