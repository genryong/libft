/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 01:48:51 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/11 15:33:56 by gryongfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char	const *s, unsigned int	strat, size_t	len)
{
	char	*str;
	char	*new;
	size_t i;
	size_t x;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (0);

	i = 0;
	x = 0;
	new = str;
	while (s[i])
	{
		if (strat <= i && x < len)
		{
			new[x] = s[i];
			x++;
		}
		i++;
	}
	new[x] = '\0';
	return (str);
}
