/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:23:21 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 19:52:44 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				kol;
	char			*str;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	kol = ft_strlen(s);
	str = (char *)malloc(kol + 1);
	if (str == NULL)
		return (NULL);
	str[kol] = '\0';
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
