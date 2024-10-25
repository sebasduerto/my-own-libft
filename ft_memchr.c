/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:00:14 by sduerto-          #+#    #+#             */
/*   Updated: 2024/10/08 08:39:08 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		chr;
	const unsigned char	*str;

	i = 0;
	chr = (unsigned char)c;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == chr)
			return ((void *) &str[i]);
		i++;
	}
	return ((void *)0);
}
