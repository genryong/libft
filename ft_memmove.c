/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:25:32 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/08 01:01:50 by gryongfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    *ft_memmove(void    *dest, const void   *src, size_t	n)
{
	char	*d;
	char	const *s;

	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}else
	{

		d = (char*)dest;
		s = (char*)src;

		d = d + n - 1;
		s = s + n - 1;

		while (n--)
		{
			*d-- = *s--;
		}
	}
	return (dest);
}
