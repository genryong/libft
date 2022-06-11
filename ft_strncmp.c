/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 21:41:19 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/08 12:33:07 by gryongfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char	*s1, const	char	*s2, size_t n)
{
	while (*s1 && (*s1 == *s2) && 0 < n)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return((unsigned char)*s1 - (unsigned char)*s2);
}
