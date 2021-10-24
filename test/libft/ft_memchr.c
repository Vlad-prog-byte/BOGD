/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:57:37 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 15:58:16 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	kol;

	kol = 0;
	while (*((char *)s) && kol != n)
	{
		kol++;
		if (*((char *)s) == c)
			return ((void *)s);
		s++;
	}
	if (*(char *)s == '\0' && kol <= n && c == '\0')
		return ((void *)s);
	return (0);
}
