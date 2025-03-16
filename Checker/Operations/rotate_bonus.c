/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:32:44 by aouaalla          #+#    #+#             */
/*   Updated: 2025/03/16 15:32:44 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations_bonus.h"

void	ra(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*last;

	if (ft_lstsize(*stack_a) < 2)
		return ;
	tmp = (*stack_a)->next;
	last = ft_lstlast(*stack_a);
	last->next = *stack_a;
	(*stack_a)->next = NULL;
	*stack_a = tmp;
}

void	rb(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*last;

	if (ft_lstsize(*stack_b) < 2)
		return ;
	tmp = (*stack_b)->next;
	last = ft_lstlast(*stack_b);
	last->next = *stack_b;
	(*stack_b)->next = NULL;
	*stack_b = tmp;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
