/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <sduerto-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:07:53 by sduerto-          #+#    #+#             */
/*   Updated: 2024/10/23 12:45:41 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*dst;

	if (!dest && !src)
		return (NULL);
	dst = (char *)dest;
	s = (const char *)src;
	if (dst > s)
	{
		while (n--)
			dst[n] = s[n];
	}
	else
	{
		return (ft_memcpy(dest, src, n));
	}
	return (dest);
}
