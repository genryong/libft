/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:53:06 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/11 15:24:36 by gryongfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char	*s1)
{
	char	*str;
	char	*s;

	if (!s1)
		return  (NULL);
	str = ((char*)malloc(sizeof(char) * ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	s = str;
	while(*s1)
		*s++ = *s1++;
	*s = '\0'; 		
	return (str);
}
