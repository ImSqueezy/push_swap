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

// void	print_value(void *n)
// {
// 	ft_printf("%d\n", n);
// }

// void	ft_lstforeach(t_list *head, void (*f)(void *data))
// {
// 	while (head)
// 	{
// 		(f)(head->content);
// 		head = head->next;
// 	}
// }


int main(int argc, char **argv)
{
	t_list	*A;
	t_list	*B;

	// the program is taking an unkown number of args
	// all has to be just numbers and no duplicates
	(void)B;
	A = NULL;
	parser(argc, argv, &A);
	while (A)
	{
		ft_printf("%d\n", A->content);
		A = A->next;
	}
	return (0);
}
