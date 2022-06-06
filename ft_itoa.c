/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:02:03 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/06 21:26:24 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int len(long nb)
{
	int l;

	l = 0;
	if (nb == 0)
		l++;
	else if (nb < 0)
	{
		nb *= nb;
		l++;
	}
	while (0 < nb)
	{
		nb = nb / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int	n)
{
	long 	nb;
	char	*str;
	int	i;
	
	nb = n;
	i = len(nb);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= nb;
	}
	while (0 < nb)
	{
		str[i--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (str);
}