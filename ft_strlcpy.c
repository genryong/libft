/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:38:14 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/19 14:49:55 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destize)
{
	size_t	srcn;

	srcn = ft_strlen(src);
	if (srcn + 1 < destize)
		ft_memcpy(dst, src, srcn + 1);
	else if (destize != 0)
	{
		ft_memcpy(dst, src, destize - 1);
		dst[destize - 1] = '\0';
	}
	return (srcn);
}
