/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genryongfa <genryongfa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 23:35:13 by genryongfa        #+#    #+#             */
/*   Updated: 2022/07/13 15:28:37 by genryongfa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char	const	*s, char (*f)(unsigned	int, char))
{
	char	*result;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	result = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char tokyo(unsigned int i, char c)
// {
// 	char a;
// 	int j;

// 	j = i + 1;
// 	while(j--)
// 	{
// 		a = c;
// 	}
// 	return (a);
// }

// int main(void)
// {
// 	printf("%s", ft_strmapi("abcdefg", tokyo));
// 	return (0);
// }
