#include "push_swap.h"

void	mini_sort(t_list **stack_a, t_list **stack_b, int size)
{
	if (size == 2)
		sort_two(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b); 
	else if (size == 5)
		sort_five(stack_a, stack_b);
}

void	big_sort(t_list **stack_b, t_list **stack_a, int size)
{
	t_list	*tmp;
	int		x;
	int		i;

	i = 0;
	x = divide_definition(size);
	while (*stack_a)
	{
		tmp = *stack_a;
		if (tmp->index <= i)
		{
			pb(stack_b, stack_a);
			i++;
		}
		else if (tmp->index <= i + x)
		{
			pb(stack_b, stack_a);
			rb(stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
}

void	restore(t_list **stack_a, t_list **stack_b)
{
	int	max;
	int	size;

	size = ft_lstsize(*stack_b);
	while (size)
	{
		positioning(stack_b);
		max = max_pos(*stack_b);
		if (max < size / 2)
		{
			while ((*stack_b)->pos != max)
				rb(stack_b);
		}
		else
		{
			while ((*stack_b)->pos != max)
				rrb(stack_b);
		}
		pa(stack_a, stack_b);
		size--;
	}
}

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int	size;

	if (sorted(*stack_a))
		return (ft_lstclear(stack_a, del), exit(0));
	size = ft_lstsize(*stack_a);
	if (size <= 5)
		mini_sort(stack_a, stack_b, size);
	else
	{
		big_sort(stack_b, stack_a, size);
		restore(stack_a, stack_b);
	}
}
