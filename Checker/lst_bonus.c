/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:30:19 by aouaalla          #+#    #+#             */
/*   Updated: 2025/03/16 15:30:20 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

t_action	*checker_lstlast(t_action *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	checker_lstadd_back(t_action **lst, t_action *new)
{
	t_action	*ptr;

	if (!new || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ptr = checker_lstlast(*lst);
	(*ptr).next = new;
}

t_action	*checker_lstnew(char *str)
{
	t_action	*lst;

	lst = (t_action *)malloc(sizeof(t_action));
	if (!lst)
		return (NULL);
	lst->action = str;
	lst->next = NULL;
	return (lst);
}

void	checker_lstclear(t_action **lst, void (*del)(void *))
{
	t_action	*next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		checker_lstdelone(*lst, del);
		*lst = next;
	}
	*lst = NULL;
}

void	checker_lstdelone(t_action *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->action);
	free(lst);
}
