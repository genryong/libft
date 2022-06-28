/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:37:19 by genryongfa        #+#    #+#             */
/*   Updated: 2022/06/28 13:38:49 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int num;
	int neg;

	num = 0;
	neg = -1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
			|| *str == '\f' || *str == '\r')
			str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = 1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		num = (num * 10) - (*str - '0');
		str++;
	}
	return (num * neg);
}

int main (void)
{
	char str[] = "1234";
	
	ft_atoi(str);
	printf("%s", str);

	return (0); 
}