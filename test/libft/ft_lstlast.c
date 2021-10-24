/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:37:00 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 15:37:34 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lst_first;
	t_list	*lst_second;

	if (lst == NULL)
		return (NULL);
	lst_first = lst;
	lst_second = lst->next;
	while (lst_second != NULL)
	{
		lst_first = lst_second;
		lst_second = lst_second->next;
	}
	return (lst_first);
}
