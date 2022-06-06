/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 08:36:23 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/06 19:46:33 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    *ft_memset(void *buf, int   ch, size_t n)
{
    size_t  i;
    i = 0;
    while(i < n)
    {
        *(unsigned char*)(buf + 1) = (unsigned char)ch;
        i++;
    }
        return(buf);
}