/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:31:27 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 16:32:22 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
static int	FindSet(char const *s1, char const *set)
{
	int	kol;
	int	i;
	int	j;

	kol = 0;
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
			if (s1[i] == set[j++])
				kol++;
		i++;
	}
	return (kol);
}

static void	NewS1(char const *s1, char const *set, char *str)
{
	int	i;
	int	j;
	int	k;
	int	flag;

	i = 0;
	k = 0;
	while (s1[i])
	{
		j = 0;
		flag = 0;
		while (set[j])
			if (set[j++] == s1[i])
				flag = 1;
		if (flag == 0)
			str[k++] = s1[i];
		i++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		kol;
	char	*str;

	kol = ft_strlen(s1) - FindSet(s1, set);
	str = (char *)malloc(kol + 1);
	str[kol] = '\0';
	if (str == NULL)
		return (NULL);
	NewS1(s1, set, str);
	return (str);
}
