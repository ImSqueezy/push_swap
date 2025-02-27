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

# define SYNTAX_ERROR "Syntax Error: ./client list_of_numbers\n"

typedef struct s_stack
{
	struct s_stack	*next;
	int				data;
	int				location;
}	t_lst;

int	parser(int ac, char **av, t_lst *stack);

#endif