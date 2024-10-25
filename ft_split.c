/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <sduerto-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:00:54 by sduerto-          #+#    #+#             */
/*   Updated: 2024/10/22 15:13:56 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	ft_word_count(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*ft_copy(const char *start, const char *end)
{
	size_t	len;
	char	*subs;

	len = end - start;
	subs = (char *)malloc((len + 1));
	if (!(subs))
		return (NULL);
	if (subs)
		ft_strlcpy(subs, start, len + 1);
	return (subs);
}

char	**ft_split(char const *s, char c)
{
	int			index;
	char		**arr;
	const char	*start;

	if (!(s))
		return (NULL);
	arr = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!(arr))
		return (NULL);
	index = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			start = s;
			while (*s && *s != c)
				s++;
			arr[index++] = ft_copy(start, s);
		}
	}
	arr[index] = NULL;
	return (arr);
}

/*int	main()
{
	int	i;
	const char str[] = "hola a todos este es mi split";
	char **result = ft_split(str, ' ');

	i = 0;
	while (result && result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
