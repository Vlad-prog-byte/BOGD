/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:58:29 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 16:08:21 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
int	ft_memcmp( const void *s1, const void *s2, size_t n)
{
	size_t			flag;
	unsigned char	*s2_copy;
	unsigned char	*s1_copy;

	s2_copy = (unsigned char *)s2;
	s1_copy = (unsigned char *)s1;
	flag = 0;
	while (flag != n)
	{
		if (*s1_copy != *s2_copy)
			return (*s1_copy - *s2_copy);
		else
		{
			s2_copy++;
			s1_copy++;
		}
		flag++;
	}
	return (0);
}
