/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:34:55 by sduerto-          #+#    #+#             */
/*   Updated: 2024/10/11 14:32:50 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*end;
	char		*str;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	end = s1 + ft_strlen(s1) - 1;
	while (end > s1 && ft_strchr(set, *end))
		end--;
	str = malloc(end - s1 + 2);
	if (!(str))
		return (NULL);
	ft_strlcpy(str, s1, end - s1 + 2);
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char *str = "abababHola mundoababab";
	char *tri = ft_strtrim(str, "ab");

	printf("%s\n", tri);

	free(tri);
	return (0);
}*/
