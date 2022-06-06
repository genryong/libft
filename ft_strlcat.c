/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 23:23:28 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/06 19:47:21 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t ft_strlcat(char  *dst, const char    *src, size_t dstsize)
{   
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while(dst[i] != '\0' && i < dstsize)
        i++;
    while(src[j] != '\0' && (i + j + 1) < dstsize)
    {
        dst[i + j] = src[j];
        j++;
    }
    if(i < dstsize)
        dst[i + j] = '\0';
    return (i + ft_strlen(src));
}