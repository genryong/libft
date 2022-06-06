/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:25:32 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/06 21:09:17 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    *ft_memmove(void    *dest, const void   *src, size_t	n)
{
	char	*tmp;
	char	const *s;
	size_t 	i;

	if (dest < src)
	{
		ft_memcopy(dest, src, n);
	}else
	{
		i = 0;

		tmp = (char*)dest;
		s = (char*)src;

		while (i < n)
		{
			*tmp++ = *s++;
			i++;
		}
	}
	return (dest);
}
