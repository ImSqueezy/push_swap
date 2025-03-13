/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:17:42 by aouaalla          #+#    #+#             */
/*   Updated: 2025/03/13 15:17:53 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_pos(t_list *stack_b)
{
	t_list	*cur;
	int		max;

	cur = stack_b;
	max = stack_b->content;
	while (cur)
	{
		if (max < cur->content)
			max = cur->content;
		cur = cur->next;
	}
	while (stack_b)
	{
		if (stack_b->content == max)
			return (stack_b->pos);
		stack_b = stack_b->next;
	}
	return (0);
}

int	divide_definition(int size)
{
	int	divide_by;

	if (size <= 100)
		divide_by = 5;
	else
		divide_by = 14;
	divide_by = size / divide_by;
	return (divide_by);
}

int	stack_order(t_list *stack_a)
{
	int	i;

	i = 0;
	while (stack_a && stack_a->next)
	{
		if (stack_a->content < stack_a->next->content)
			i--;
		else
			i++;
		stack_a = stack_a->next;
	}
	return (i);
}

void	positioning(t_list **stack)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = (*stack);
	while (tmp)
	{
		tmp->pos = i;
		tmp = tmp->next;
		i++;
	}
}

int	sorted(t_list *lst)
{
	while (lst && lst->next)
	{
		if (lst->content > lst->next->content)
			return (0);
		lst = lst->next;
	}
	return (1);
}
