/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <sduerto-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:49:12 by sduerto-          #+#    #+#             */
/*   Updated: 2024/10/23 14:20:44 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}
