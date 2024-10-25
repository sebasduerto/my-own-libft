/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:36:57 by sduerto-          #+#    #+#             */
/*   Updated: 2024/09/30 12:37:43 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	idest;
	size_t	isrc;
	size_t	i;

	idest = ft_strlen(dst);
	isrc = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (isrc);
	if (size <= idest)
		return (isrc + size);
	while (i < isrc && idest + i < size - 1)
	{
		dst[idest + i] = src[i];
		i++;
	}
	dst[idest + i] = '\0';
	return (idest + isrc);
}
