/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:07:23 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 15:14:24 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int				flag;
	unsigned int	sum;

	sum = 0;
	flag = 1;
	while (*str != '\0' && ((*str >= 9 && *str <= 13) || *str == ' '))
		str++;
	if (*str == '+')
		str++;
	if (*(str) == '-')
	{
		str++;
		flag = -1;
	}
	while (*str != '\0' && ft_isdigit(*str) == 1)
	{
		sum = sum * 10 + (*str - 48);
		str++;
	}
	if (sum > 2147483648 && flag == -1)
		return (0);
	if (sum > 2147483647 && flag == 1)
		return (-1);
	return (sum * flag);
}
