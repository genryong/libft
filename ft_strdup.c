/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:53:06 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/06 21:15:13 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char	*s1)
{
	char	*str;
	size_t i;

	if (!s1)
		return (0);
	str = ((char*)malloc(ft_strlen(s1) + 1));
	if (!str)
		return (0);
	
	i = 0;
	
	while(!s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
