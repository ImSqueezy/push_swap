/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:32:36 by aouaalla          #+#    #+#             */
/*   Updated: 2025/03/16 15:32:37 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations_bonus.h"

void	pa(t_list **dst, t_list **src)
{
	t_list	*old_head;
	t_list	*new_head;

	if (!*src)
		return ;
	new_head = *src;
	*src = (*src)->next;
	old_head = *dst;
	*dst = new_head;
	(*dst)->next = old_head;
}

void	pb(t_list **dst, t_list **src)
{
	t_list	*old_head;
	t_list	*new_head;

	if (!*src)
		return ;
	new_head = *src;
	*src = (*src)->next;
	old_head = *dst;
	*dst = new_head;
	(*dst)->next = old_head;
}
