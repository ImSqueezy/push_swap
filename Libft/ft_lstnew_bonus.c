/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <aouaalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:02:49 by aouaalla          #+#    #+#             */
/*   Updated: 2024/11/07 02:14:24 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

t_list	*ft_lstnew(int content, int index)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = malloc(sizeof(int));
	if (!lst->content)
	{
		free(lst);
		return (NULL);
	}
	lst->index = malloc(sizeof(int));
	if (!lst->index)
	{
		free(lst->content);
		free(lst);
		return (NULL);
	}
	*(int *)lst->content = content;
	*(int *)lst->index = index;
	lst->next = NULL;
	return (lst);
}
