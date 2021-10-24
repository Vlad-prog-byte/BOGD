/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:37:50 by cayesha           #+#    #+#             */
/*   Updated: 2021/10/24 15:56:15 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*spisok;

	spisok = (t_list *)malloc(sizeof(t_list));
	if (spisok == NULL)
		return (NULL);
	else
	{
		spisok->content = content;
		spisok->next = NULL;
		return (spisok);
	}
}
