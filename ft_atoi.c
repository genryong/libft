/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:37:19 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/10 16:41:10 by gryongfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*str)
{
	int	num;
	int	negative;

	num = 0;
	negative = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' || 
					*str == '\f' || *str == '\r' || *str == ' ')

		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative++;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	if (negative)
		return (-num);
	return (num);
}
