/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:37:19 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/06 21:14:02 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*str)
{
	int	i;
	int	minus;
	int a;

	if (!str)
		return (0);
	i = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || 
					(str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))

		i++;
	minus = (str[i] == '-') ? -1 : 1;
	if (minus == -1 || str[i] == '+')
		i++;
	a = 0;
	while (0 <=str[i] && str[i] <= '9')
		a = (a * 10) + (str[i++] - '0');
	return (a * minus);
}