/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:09:35 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 16:35:52 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((char *)dst == NULL && (char *)src == NULL)
		return ((char *)dst);
	if ((char *)dst > (char *)src)
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	else
		while (len--)
			*(char *)dst++ = *(char *)src++;
	return (dst);
}
