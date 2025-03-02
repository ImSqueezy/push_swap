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

# define PARSE_ERROR "Error\n"
# define FAIL_FLAG 2147483649 

int		parser(int ac, char **av, t_list **stack);
int		ft_ismpoperators(int c);
void	parse_error(char **p);
void	free_doubly(char **ptr);
void	del(void *ptr);

#endif