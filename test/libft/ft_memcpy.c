/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:08:56 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 16:09:21 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	flag;

	flag = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	while (flag < n)
	{
		((char *)dst)[flag] = ((const char *)src)[flag];
		flag++;
	}
	return ((void *)dst);
}
