/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 08:36:23 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/25 04:03:12 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)buf;
	while (n--)
	{
		*str = (unsigned char)ch;
		str++;
	}
	return (buf);
}
