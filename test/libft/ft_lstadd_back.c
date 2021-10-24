/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:21:36 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 15:22:33 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*spisok;

	spisok = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (spisok->next != NULL)
		spisok = spisok->next;
	spisok->next = new;
}
