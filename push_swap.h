/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:12:29 by aouaalla          #+#    #+#             */
/*   Updated: 2025/02/27 15:12:29 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include "printf/ft_printf.h"
# include "Operations/operations.h"

# define PARSE_ERROR "Error\n"
# define FAIL_FLAG 2147483648

int		parser(int ac, char **av, t_list **stack);
int		ft_ismpoperators(int c);
void	parse_error(char **p);
void	free_doubly(char **ptr);
void	del(void *ptr);

void	push_swap(t_list **stack_a, t_list **stack_b);
void	sort_two(t_list **lst);
void	sort_three(t_list **lst);
void	sort_four(t_list **left_hand, t_list **right_hand);
void	sort_five(t_list **left_hand, t_list **right_hand);
void	positioning(t_list **stack);
int		sorted(t_list *lst);
int		divide_definition(int size);
int		max_pos(t_list *stack_b);
int		stack_order(t_list *stack_a);

#endif