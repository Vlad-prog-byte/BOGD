/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:25:35 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 16:37:22 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strstr( char *haystack, const char *needle)
{
	char		*find;
	const char	*copy;
	int			flag;

	if (needle == 0)
		return (haystack);
	while (haystack)
	{
		if (*haystack == *needle)
		{
			find = haystack;
			copy = needle;
			flag = 1;
			while (copy)
			{
				if (*haystack != *copy)
					flag = 0;
				copy++;
			}
			if (flag == 1)
				return (find);
			else
				return (0);
		}
		haystack++;
	}
	return (0);
}