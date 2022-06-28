/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:25:32 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/27 23:15:52 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t	n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d < s)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		d = d + n - 1;
		s = s + n - 1;
		while (n--)
			*(d--) = *(s--);
	}
	return (dest);
}

// int main (void)
// {
// 	char d[] = 0;
// 	char s[] = 0;

// 	memmove(d, s, 3);

// 	printf("%s", d);

// 	return (0);
// }