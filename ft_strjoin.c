/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <sduerto-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:25:15 by sduerto-          #+#    #+#             */
/*   Updated: 2024/10/19 19:09:05 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*len;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s1));
	if (!s2)
		return (ft_strdup(s2));
	i = 0;
	j = 0;
	len = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!(len))
		return (NULL);
	while (s1[i])
		len[j++] = s1[i++];
	i = 0;
	while (s2[i])
		len[j++] = s2[i++];
	len[j] = '\0';
	return (len);
}
/*
#include <stdio.h>

int	main()
{
	const char *s1 = "Hola";
	const char *s2 = "mundo";
	const char *delimitador = ", ";
	char *str = ft_strjoin(s1, delimitador);
	char *s = ft_strjoin(str, s2);
	printf("Resultado: %s\n", s);

	free(str);
	free(s);

	return (0);
}*/
