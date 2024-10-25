/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:10:40 by sduerto-          #+#    #+#             */
/*   Updated: 2024/10/19 12:53:16 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	index = 0;
	while (s[index])
	{
		(*f)(index, &s[index]);
		index++;
	}
}
/*
void to_upper(unsigned int index, char *c)
{
		if (*c >= 'a' && *c <= 'z' && index % 2 == 0)
		{
			*c -= 32;
		}
}

int	main()
{
	char str[] = "abcdefghi";
	printf("%s\n", str);
	ft_striteri(str, to_upper);
	printf("%s\n", str);

	return (0);
}*/
