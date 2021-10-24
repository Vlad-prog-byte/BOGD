/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:24:04 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 16:24:26 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
int	ft_strncmp( const char *s1, const char *s2, size_t n )
{
	size_t	flag;

	flag = 0;
	while (s1[flag] && flag < n)
	{
		if (s1[flag] != s2[flag])
			return ((unsigned char)s1[flag] - (unsigned char)s2[flag]);
		flag++;
	}
	if (flag == n)
		return (0);
	else
		return ((unsigned char)s1[flag] - (unsigned char)s2[flag]);
}
