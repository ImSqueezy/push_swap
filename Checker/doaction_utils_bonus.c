#include "checker_bonus.h"

void	execute_push(t_list **s_a, t_list **s_b, char *action)
{
	if (!ft_strcmp(action, "pa\n"))
		pa(s_a, s_b);
	if (!ft_strcmp(action, "pb\n"))
		pb(s_b, s_a);
}

void	execute_swap(t_list **s_a, t_list **s_b, char *action)
{
	if (!ft_strcmp(action, "sa\n"))
		sa(s_a);
	if (!ft_strcmp(action, "sb\n"))
		sb(s_b);
	if (!ft_strcmp(action, "ss\n"))
		ss(s_a, s_b);
}

void	execute_rotate(t_list **s_a, t_list **s_b, char *action)
{
	if (!ft_strcmp(action, "ra\n"))
		ra(s_a);
	if (!ft_strcmp(action, "rb\n"))
		rb(s_b);
	if (!ft_strcmp(action, "rr\n"))
		rr(s_a, s_b);
}

void	execute_rrotate(t_list **s_a, t_list **s_b, char *action)
{
	if (!ft_strcmp(action, "rra\n"))
		rra(s_a);
	if (!ft_strcmp(action, "rrb\n"))
		rrb(s_b);
	if (!ft_strcmp(action, "rrr\n"))
		rrr(s_a, s_b);
}
