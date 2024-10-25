/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:47:34 by sduerto-          #+#    #+#             */
/*   Updated: 2024/10/07 12:35:23 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	littlen;

	littlen = ft_strlen(little);
	if (littlen == 0 || big == little)
		return ((char *)big);
	while (*big && littlen <= len)
	{
		if (!(ft_strncmp((char *)big, (char *)little, littlen)))
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}
