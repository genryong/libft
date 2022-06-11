/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 08:36:23 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/07 23:54:24 by gryongfa         ###   ########.fr       */
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
        *(unsigned char*)(buf) = (unsigned char)ch;
        i++;
		buf++;
    }
        return(buf);
}
