/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 01:48:51 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/06 21:15:33 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char	const *s, unsigned int	strat, size_t	len)
{
	char	*str;
	size_t i;
	size_t x;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (0);

	i = 0;
	x = 0;
	while (s[i])
	{
		if (strat <= i && x < len)
		{
			str[x] = s[i];
			x++;
		}
		i++;
	}
	str[x] = 0;
	return (str);
}