/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sorts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:39:26 by aouaalla          #+#    #+#             */
/*   Updated: 2025/03/13 15:39:27 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list **lst)
{
	if ((*lst)->content > (*lst)->next->content)
		sa(lst);
}

void	sort_three(t_list **lst)
{
	t_list	*cur;
	int		max;

	max = (*lst)->content;
	cur = *lst;
	while (cur)
	{
		if (max < cur->content)
			max = cur->content;
		cur = cur->next;
	}
	if (max == (*lst)->content)
		ra(lst);
	else if (max == (*lst)->next->content)
		rra(lst);
	sort_two(lst);
}

void	sort_four(t_list **left_hand, t_list **right_hand)
{
	t_list	*cur;
	int		min;

	min = (*left_hand)->content;
	cur = *left_hand;
	while (cur)
	{
		if (min > cur->content)
			min = cur->content;
		cur = cur->next;
	}
	while (1)
	{
		if (min == (*left_hand)->next->content)
			ra(left_hand);
		else if (min != (*left_hand)->content)
			rra(left_hand);
		else
			break ;
	}
	pb(right_hand, left_hand);
	sort_three(left_hand);
	pa(left_hand, right_hand);
}

void	sort_five(t_list **left_hand, t_list **right_hand)
{
	t_list	*cur;
	int		min;

	min = (*left_hand)->content;
	cur = *left_hand;
	while (cur)
	{
		if (min > cur->content)
			min = cur->content;
		cur = cur->next;
	}
	while (1)
	{
		if (min == (*left_hand)->next->content)
			ra(left_hand);
		else if (min != (*left_hand)->content)
			rra(left_hand);
		else
			break ;
	}
	pb(right_hand, left_hand);
	sort_four(left_hand, right_hand);
	pa(left_hand, right_hand);
}
