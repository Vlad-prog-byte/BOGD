/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:16:51 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 16:18:24 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		kol;
	int		flag;

	flag = 0;
	kol = ft_strlen(s1);
	copy = (char *)malloc(kol + 1);
	if (copy == 0)
		return (0);
	while (flag != kol + 1)
	{
		copy[flag] = s1[flag];
		flag++;
	}
	return (copy);
}
