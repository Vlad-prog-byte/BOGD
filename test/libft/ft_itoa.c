/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:12:49 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 15:21:25 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
static int	ft_size(int n)
{
	long int	new_n;
	int			kol;

	if (n < 0)
	{
		new_n = n;
		new_n = new_n * (-1);
	}
	else
		new_n = n;
	kol = 0;
	if (new_n == 0)
		return (1);
	while (new_n > 0)
	{
		kol++;
		new_n = new_n / 10;
	}
	return (kol);
}

static void	Convert_int_to_char(int kol, int n, char *str)
{
	long int	new_n;
	int			x;

	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		new_n = n;
		new_n *= -1;
	}
	else
		new_n = n;
	str[kol--] = '\0';
	while (new_n > 0)
	{
		x = new_n % 10;
		new_n = new_n / 10;
		str[kol--] = '0' + x;
	}
}

char	*ft_itoa(int n)
{
	int		flag;
	char	*str;
	int		kol;

	kol = ft_size(n);
	if (n >= 0)
		flag = 1;
	else
		flag = -1;
	if (flag == -1)
	{
		str = (char *)malloc(kol + 2);
		if (str == NULL)
			return (NULL);
		Convert_int_to_char(kol + 1, n, str);
	}
	else
	{
		str = (char *)malloc(kol + 1);
		if (str == NULL)
			return (NULL);
		Convert_int_to_char(kol, n, str);
	}
	return (str);
}
