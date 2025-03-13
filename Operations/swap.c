/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:28:56 by aouaalla          #+#    #+#             */
/*   Updated: 2025/03/03 13:28:57 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **head)
{
	t_list	*curr;
	t_list	*next;

	if (ft_lstsize(*head) < 2)
		return ;
	ft_printf("sa\n");
	curr = *head;
	next = (*head)->next;
	curr->next = next->next;
	next->next = curr;
	*head = next;
}

void	sb(t_list **head)
{
	t_list	*curr;
	t_list	*next;

	if (ft_lstsize(*head) < 2)
		return ;
	ft_printf("sa\n");
	curr = *head;
	next = (*head)->next;
	curr->next = next->next;
	next->next = curr;
	*head = next;
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
