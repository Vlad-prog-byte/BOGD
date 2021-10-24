/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:18:30 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 19:53:55 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size1;
	int		size2;
	char	*str;
	int		kol;
	int		i;

	i = 0;
	kol = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	str = (char *)malloc(size1 + size2 + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i])
		str[kol++] = s1[i++];
	i = 0;
	while (s2[i])
		str[kol++] = s2[i++];
	str[kol] = '\0';
	return (str);
}
