/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:41:30 by sduerto-          #+#    #+#             */
/*   Updated: 2024/10/19 12:07:15 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*result;

	result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!(result))
		return (NULL);
	index = 0;
	while (index < ft_strlen(s))
	{
		result[index] = (*f)(index, s[index]);
		index++;
	}
	result[index] = 0;
	return (result);
}
/*
char	ft_upletter(unsigned int index, char c)
{
	while (c >= 97 && c <= 122 && index % 2 == 0)
	{
		c -= 32;
	}
	return (c);
}

int	main()
{
	char const *s = "abcdefghi";
	char *res = ft_strmapi(s, ft_upletter);

	printf("%s\n", res);

	free(res);
	return (0);
}*/
