/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 23:23:28 by genryongfa        #+#    #+#             */
/*   Updated: 2022/07/26 01:16:59 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	len;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	len = 0;
	if (dstlen < dstsize)
		len = dstlen + srclen;
	else
		len = srclen + dstsize;
	while (src[i] && (dstlen + 1) < dstsize)
	{
		dst[dstlen] = src[i];
		dstlen++;
		i++;
	}
	dst[dstlen] = '\0';
	return (len);
}
