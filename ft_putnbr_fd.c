/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <sduerto-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:37:13 by sduerto-          #+#    #+#             */
/*   Updated: 2024/10/19 18:51:52 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int	res;

	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
		ft_putnbr_fd(nb, fd);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr_fd(nb / 10, fd);
		}
		res = ((nb % 10) + '0');
		write(fd, &res, 1);
	}
}
