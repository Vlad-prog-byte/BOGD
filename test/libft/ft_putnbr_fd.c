/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:12:24 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 16:13:54 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static void	Recur(long int n, int fd)
{
	char	c;

	if (n < 10)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
	else
	{
		Recur(n / 10, fd);
		Recur(n % 10, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int			flag;
	long int	new_n;

	flag = 1;
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n <= 0)
	{
		write(fd, "-", 1);
		flag = -1;
	}
	new_n = n;
	new_n *= flag;
	Recur(new_n, fd);
}
