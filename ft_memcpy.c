/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:20:40 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/06 19:46:23 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    *ft_memcpy(void *dst, const void    *src, size_t n)
{
    size_t i;

    if(!dst)
        return(NULL);
    
    i = 0;
    while (i < n)
    {
        *(unsigned char*)(dst + i) = *(unsigned char*)(src + i);
        i++;
    }
    return (dst);

}