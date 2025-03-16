/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:29:24 by aouaalla          #+#    #+#             */
/*   Updated: 2025/03/16 15:29:25 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "../Libft/libft.h"
# include "Operations/operations_bonus.h"
# include "gnl/get_next_line.h"
# include "../printf/ft_printf.h"
# define PARSE_ERROR "Error\n"
# define FAIL_FLAG 2147483648

typedef struct s_action
{
	char	*action;
	void	*next;
}	t_action;

int			parser(int ac, char **av, t_list **stack);
int			ft_ismpoperators(int c);
void		parse_error(char **p);
void		free_doubly(char **ptr);
void		del(void *ptr);

t_action	*checker_lstlast(t_action *lst);
t_action	*checker_lstnew(char *str);
void		checker_lstadd_back(t_action **lst, t_action *new);
void		checker_lstclear(t_action **lst, void (*del)(void *));
void		checker_lstdelone(t_action *lst, void (*del)(void *));

int			ft_strcmp(char *s1, char *s2);
int			sorted(t_list *lst);
void		parsing_ko(t_list **sa, t_list **sb, t_action **lst);

void		execute_rrotate(t_list **s_a, t_list **s_b, char *action);
void		execute_rotate(t_list **s_a, t_list **s_b, char *action);
void		execute_swap(t_list **s_a, t_list **s_b, char *action);
void		execute_push(t_list **s_a, t_list **s_b, char *action);

#endif
