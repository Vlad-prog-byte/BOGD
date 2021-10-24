/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:23:22 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 15:36:21 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*spisok;

	spisok = *lst;
	if (lst == NULL || del == NULL || *lst)
		return ;
	while (spisok != NULL)
	{
		del(spisok->content);
		spisok = spisok->next;
	}
}
