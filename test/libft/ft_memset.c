/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:10:09 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 16:10:49 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	kol;

	kol = 0;
	while (kol < len)
	{
		((unsigned char *)b)[kol] = c;
		kol++;
	}
	return (b);
}
