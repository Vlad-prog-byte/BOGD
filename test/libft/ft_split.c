/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:26:47 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 20:19:59 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
// int Kol_c(char const *s, char c)
// {
//     int kol;
//     int i;
//     i = 0;
//     kol = 0;
//     while (s[i])
//     {
//         if (s[i] == c &&  (i == 0  || s[i - 1] == c))
//         {
//             i++;
//             continue;
//         }
//         if (s[i] == c && s[i - 1] != c)
//         {
//             kol++;
//             i++;
//             continue;
//         }
//         i++;
//     }
//     if (kol == 0 && s[0] != 'c')
//         kol = 1;
//     return (kol);
// }
static int	Kol_slov(char const *s, char c)
{
	int	kol;
	int	i;

	i = 0;
	kol = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
		{
			i++;
			kol++;
			continue ;
		}
		if (s[i - 1] == c && s[i] != c)
		{
			kol++;
			i++;
			continue ;
		}
		i++;
	}
	return (kol);
}

static char	*Add(int finally, int start, char const *s)
{
	int		leng;
	int		kol;
	char	*str;

	kol = 0;
	leng = finally - start + 1;
	str = (char *)malloc(leng + 1);
	if (str == NULL)
		return (NULL);
	while (start <= finally)
	{
		str[kol] = s[start];
		start++;
		kol++;
	}
	return (str);
}

static int	STRS(char **stroki, char c, char const *s)
{
	int	flag;
	int	start;
	int	finally;
	int	i;

	flag = 0;
	start = 0;
	finally = 0;
	i = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (i != 0 && s[i - 1] == c))
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			finally = i;
			stroki[flag] = Add(finally, start, s);
			if (stroki[flag] == NULL)
				return (-1);
			flag++;
		}
		i++;
	}
	return (1);
}

static void	ft_Free(char **stroki, int kol)
{
	int	i;

	i = 0;
	while (i < kol)
		free(stroki[i++]);
	free(stroki);
}

char	**ft_split(char const *s, char c)
{
	int		kol;
	char	**stroki;

	if (s == NULL)
		return (NULL);
	kol = Kol_slov(s, c);
	stroki = (char **)malloc(sizeof(char *) * (kol + 1));
	if (stroki == NULL)
		return (NULL);
	stroki[kol + 1] = NULL;
	if (STRS(stroki, c, s) == -1)
	{
		ft_Free(stroki, kol);
		return (NULL);
	}
	return (stroki);
}
