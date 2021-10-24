/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:19:53 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 16:20:33 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	kol;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	if (dstsize == 0 || dst == NULL || src == NULL)
		return (ft_strlen(src));
	kol = 0;
	while (src[kol] && kol < dstsize - 1)
	{
		dst[kol] = src[kol];
		kol++;
	}
	dst[kol] = '\0';
	return (ft_strlen(src));
}
