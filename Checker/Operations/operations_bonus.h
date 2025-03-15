/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:47:34 by aouaalla          #+#    #+#             */
/*   Updated: 2025/03/03 12:47:36 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "../../push_swap.h"

void	sa(t_list **head);
void	sb(t_list **head);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **dst, t_list **src);
void	pb(t_list **dst, t_list **src);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

#endif