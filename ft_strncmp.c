/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 21:41:19 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/06 19:47:44 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char	*s1, const	char	*s2, size_t n)
{
	size_t i;

	i = 0;
	
	while (s1[i] && s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return((unsigned char )s1[i] - (unsigned char )s2[i]);
}