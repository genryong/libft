/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:53:06 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/15 05:57:11 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*str;
	char	*s;

	str = ((char *)malloc(sizeof(char) * ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	s = str;
	while (*s1)
		*s++ = *s1++;
	*s = '\0';
	return (str);
}
