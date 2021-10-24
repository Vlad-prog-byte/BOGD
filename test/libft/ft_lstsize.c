/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:56:31 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 15:57:00 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int	kol;

	kol = 0;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		kol++;
		lst = lst->next;
	}
	return (kol);
}
