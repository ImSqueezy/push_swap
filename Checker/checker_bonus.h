
#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "../Libft/libft.h"
# include "gnl/get_next_line.h"
# define PARSE_ERROR "Error\n"
# define FAIL_FLAG 2147483648

int		parser(int ac, char **av, t_list **stack);
int		ft_ismpoperators(int c);
void	parse_error(char **p);
void	free_doubly(char **ptr);
void	del(void *ptr);

#endif