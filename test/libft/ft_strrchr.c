/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:24:53 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 16:25:23 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
static int	Size_s(char *s)
{
	int	kol;

	kol = 0;
	while (*s)
	{
		kol++;
		s++;
	}
	return (kol);
}

char	*ft_strrchr(const char *s, int c)
{
	int	kol;

	kol = Size_s((char *)s);
	while (kol >= 0)
	{
		if (s[kol] == c)
			return ((char *)(&s[kol]));
		kol--;
	}
	return (0);
}
