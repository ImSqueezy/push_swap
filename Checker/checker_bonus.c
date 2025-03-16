/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:29:03 by aouaalla          #+#    #+#             */
/*   Updated: 2025/03/16 15:29:06 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	action_validator(char *ptr)
{
	if (ft_strcmp(ptr, "rra\n") && ft_strcmp(ptr, "rrb\n")
		&& ft_strcmp(ptr, "rrr\n") && ft_strcmp(ptr, "ra\n")
		&& ft_strcmp(ptr, "rb\n") && ft_strcmp(ptr, "rr\n")
		&& ft_strcmp(ptr, "sa\n") && ft_strcmp(ptr, "sb\n")
		&& ft_strcmp(ptr, "ss\n") && ft_strcmp(ptr, "pb\n")
		&& ft_strcmp(ptr, "pa\n"))
		return (0);
	return (1);
}

int	actions_reader(t_action **head)
{
	char	*action;

	action = get_next_line(0);
	while (action)
	{
		checker_lstadd_back(head, checker_lstnew(action));
		if (!action_validator(action))
			return (0);
		action = get_next_line(0);
	}
	return (1);
}

void	do_action(t_list **stack_a, t_list **stack_b, t_action *head)
{
	while (head)
	{
		if (!ft_strcmp(head->action, "pa\n")
			|| !ft_strcmp(head->action, "pb\n"))
			execute_push(stack_a, stack_b, head->action);
		else if (!ft_strcmp(head->action, "sa\n")
			|| !ft_strcmp(head->action, "sb\n")
			|| !ft_strcmp(head->action, "ss\n"))
			execute_swap(stack_a, stack_b, head->action);
		else if (!ft_strcmp(head->action, "ra\n")
			|| !ft_strcmp(head->action, "rb\n")
			|| !ft_strcmp(head->action, "rr\n"))
			execute_rotate(stack_a, stack_b, head->action);
		else if (!ft_strcmp(head->action, "rra\n")
			|| !ft_strcmp(head->action, "rrb\n")
			|| !ft_strcmp(head->action, "rrr\n"))
			execute_rrotate(stack_a, stack_b, head->action);
		head = head->next;
	}
}

int	main(int argc, char **argv)
{
	t_action	*head;
	t_list		*stack_a;
	t_list		*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	head = NULL;
	if (argc == 1)
		return (0);
	parser(argc, argv, &stack_a);
	if (!actions_reader(&head))
		parsing_ko(&stack_a, &stack_b, &head);
	do_action(&stack_a, &stack_b, head);
	if (!sorted(stack_a) || ft_lstsize(stack_b))
		write(1, "KO", 2);
	else
		write(1, "OK", 2);
	ft_lstclear(&stack_a, del);
	ft_lstclear(&stack_b, del);
	checker_lstclear(&head, del);
	return (write(1, "\n", 1), 0);
}
