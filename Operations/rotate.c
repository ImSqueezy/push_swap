/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:35:25 by aouaalla          #+#    #+#             */
/*   Updated: 2025/03/05 13:35:26 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*last;

	// do nothing if the list is NULL or has only one node
	if (ft_lstsize(*stack_a) < 2)
		return ;
	ft_printf("ra\n");
	tmp = (*stack_a)->next; // second is saved
	// add the first to back head becomes the last
	last = ft_lstlast(*stack_a); // i have the last
	// point it's next on head and head-s next on null then make second first
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
	ft_printf("rb\n");
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