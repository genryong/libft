/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:38:14 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/06 19:47:27 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t ft_strlcpy(char	*dest, const	char *src, size_t	destize)
{
	size_t i;

    i = 0;

	while (*src && i < (destize - 1))
	{
		*dest++ = *src++;
		i++;
	}
    dest[i] = '\0';
    return (ft_strlen(src));
}