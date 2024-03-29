/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:38:27 by genryongfa        #+#    #+#             */
/*   Updated: 2022/07/26 01:15:22 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	char	*str;

	str = NULL;
	while (*s != '\0')
	{
		if (*s == (char) c)
			str = (char *) s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (str);
}
