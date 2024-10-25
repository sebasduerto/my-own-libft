/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <sduerto-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:45:05 by sduerto-          #+#    #+#             */
/*   Updated: 2024/10/19 18:48:05 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		count;
	int		i;

	count = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (count + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < count)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
