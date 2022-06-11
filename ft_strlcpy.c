/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:38:14 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/07 14:19:31 by gryongfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t ft_strlcpy(char	*dest, const	char *src, size_t	destize)
{
	size_t srcn;

    srcn = strlen(src);
	if (srcn + 1 < destize)
		ft_memcpy(dest, src, srcn + 1);
	else if (destize != 0)
	{
		ft_memcpy(dest, src, destize - 1);
    	dest[destize - 1] = '\0';
	}
    return (srcn);
}


