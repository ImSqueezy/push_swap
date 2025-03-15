/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:35:38 by aouaalla          #+#    #+#             */
/*   Updated: 2025/03/05 13:35:39 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations_bonus.h"

void	rra(t_list **stack_a)
{
	t_list	*curr;
	t_list	*new_head;

	if (ft_lstsize(*stack_a) < 2)
		return ;
	curr = *stack_a;
	while (curr->next->next)
		curr = curr->next;
	new_head = curr->next;
	curr->next = NULL;
	new_head->next = *stack_a;
	*stack_a = new_head;
}

void	rrb(t_list **stack_b)
{
	t_list	*curr;
	t_list	*new_head;

	if (ft_lstsize(*stack_b) < 2)
		return ;
	curr = *stack_b;
	while (curr->next->next)
		curr = curr->next;
	new_head = curr->next;
	curr->next = NULL;
	new_head->next = *stack_b;
	*stack_b = new_head;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
