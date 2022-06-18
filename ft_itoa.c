/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:02:03 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/18 14:12:45 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long nb)
{
	int	l;

	if (nb == 0)
		return (1);
	l = 0;
	while (0 < nb)
	{
		l++;
		nb = nb / 10;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	int				i;	

	if (n < 0)
		num = -n;
	else
		num = n;
	i = len(num);
	if (n < 0)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	str[i] = '\0';
	while (0 < num)
	{
		str[--i] = num % 10 + '0';
		num = num / 10;
	}
	return (str);
}
