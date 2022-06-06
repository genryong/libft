/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 01:58:56 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/06 21:08:17 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t    ft_strlen(const char *str)
{
    
    size_t i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}
