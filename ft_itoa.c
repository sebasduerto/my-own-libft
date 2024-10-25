/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <sduerto-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:35:54 by sduerto-          #+#    #+#             */
/*   Updated: 2024/10/19 19:21:34 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

int	ft_int_count(int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*result;
	int		negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	negative = n < 0;
	count = ft_int_count(n) + negative;
	result = (char *)malloc((count + 1) * sizeof(char));
	if (!(result))
		return (NULL);
	result[count] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	while (count-- > negative)
	{
		result[count] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}
/*
int main()
{
	printf("%s\n", ft_itoa(100));
	printf("%s\n", ft_itoa(-100));

	return (0);
}
*/
