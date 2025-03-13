/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:03:50 by aouaalla          #+#    #+#             */
/*   Updated: 2025/03/03 14:03:50 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list **dst, t_list **src)
{
	t_list	*old_head;
	t_list	*new_head;

	if (!*src)
		return ;
	ft_printf("pa\n");
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
	ft_printf("pb\n");
	new_head = *src;
	*src = (*src)->next;
	old_head = *dst;
	*dst = new_head;
	(*dst)->next = old_head;
}
