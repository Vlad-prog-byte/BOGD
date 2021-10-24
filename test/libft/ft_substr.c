/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:32:36 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 16:33:16 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
static int	ft_Size(char const *s, unsigned int start, size_t len)
{
	unsigned int	kol;

	kol = 0;
	while (s[kol + start] && (kol <= len))
		kol++;
	return (kol);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		kol;
	int		leng;

	leng = ft_Size(s, start, len);
	kol = 0;
	str = (char *)malloc(leng + 1);
	if (str == NULL)
		return (0);
	while (kol < leng)
	{
		str[kol] = s[start + kol];
		kol++;
	}
	str[kol] = '\0';
	return (str);
}
