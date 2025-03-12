#include "push_swap.h"

int	max_pos(t_list *stack_b)
{
	t_list	*cur;
	int		max;

	cur = stack_b;
	max = stack_b->content;
	while (cur)
	{
		if (max < cur->content)
			max = cur->content;
		cur = cur->next;
	}
	while (stack_b)
	{
		if (stack_b->content == max)
			return (stack_b->pos);
		stack_b = stack_b->next;
	}
	return (0);
}

int	divide_definition(int size)
{
	int	divide_by;

	if (size <= 100)
		divide_by = 16;
	else
		divide_by = 36;
	return (divide_by);
}

void	positioning(t_list **stack)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = (*stack);
	while (tmp)
	{
		tmp->pos = i;
		tmp = tmp->next;
		i++;
	}
}

int	sorted(t_list *lst)
{
	while (lst && lst->next)
	{
		if (lst->content > lst->next->content)
			return (0);
		lst = lst->next;
	}
	return (1);
}
