/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 02:18:39 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/25 04:42:09 by genryongfa       ###   ########.fr       */
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
