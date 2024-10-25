/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:42:41 by sduerto-          #+#    #+#             */
/*   Updated: 2024/10/08 10:18:22 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	dst = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	return (dest);
}
