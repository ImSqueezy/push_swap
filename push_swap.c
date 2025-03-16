/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:13:13 by aouaalla          #+#    #+#             */
/*   Updated: 2025/03/13 15:13:15 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mini_sort(t_list **stack_a, t_list **stack_b, int size)
{
	if (size == 2)
		sort_two(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
}

int	push_b(t_list **stack_a, t_list **stack_b, int *range, int chunk)
{
	if ((*stack_a)->index <= *range)
	{
		pb(stack_b, stack_a);
		*range += 1;
		return (1);
	}
	else if ((*stack_a)->index <= *range + chunk)
	{
		pb(stack_b, stack_a);
		rb(stack_b);
		*range += 1;
		return (1);
	}
	return (0);
}

void	big_sort(t_list **stack_b, t_list **stack_a, int size)
{
	int	i;
	int	order;
	int	x;

	i = 0;
	x = divide_definition(size);
	order = stack_order(*stack_a);
	while (*stack_a)
	{
		if (!push_b(stack_a, stack_b, &i, x))
		{
			if (!order)
				rra(stack_a);
			else
				ra(stack_a);
		}
	}
}

void	restore(t_list **stack_a, t_list **stack_b)
{
	int	max;
	int	size;

	size = ft_lstsize(*stack_b);
	while (size)
	{
		positioning(stack_b);
		max = max_pos(*stack_b);
		if (max < size / 2)
		{
			while ((*stack_b)->pos != max)
				rb(stack_b);
		}
		else
		{
			while ((*stack_b)->pos != max)
				rrb(stack_b);
		}
		pa(stack_a, stack_b);
		size--;
	}
}

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int	size;

	if (sorted(*stack_a))
		return (ft_lstclear(stack_a, del), exit(0));
	size = ft_lstsize(*stack_a);
	if (size <= 5)
		mini_sort(stack_a, stack_b, size);
	else
	{
		big_sort(stack_b, stack_a, size);
		restore(stack_a, stack_b);
	}
	ft_lstclear(stack_a, del);
	ft_lstclear(stack_b, del);
}
