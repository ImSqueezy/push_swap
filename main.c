/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:13:57 by aouaalla          #+#    #+#             */
/*   Updated: 2025/02/27 15:13:57 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	(void)stack_b;
	stack_a = NULL;
	parser(argc, argv, &stack_a);
	ft_lstclear(&stack_b, del);
	return (0);
}

/* testing */

// int	main(int argc, char **argv)
// {
// 	t_list	*stack_a;
// 	t_list	*stack_b;

// 	stack_b = NULL;
// 	stack_a = NULL;
// 	parser(argc, argv, &stack_a);

// 	pb(&stack_b, &stack_a);
// 	pa(&stack_a, &stack_b);

// 	ft_lstclear(&stack_a, del);
// 	ft_lstclear(&stack_b, del);
// 	return (0);
// }
