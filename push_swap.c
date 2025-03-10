#include "push_swap.h"

static int	sorted(t_list *lst)
{
	while (lst && lst->next)
	{
		if (lst->content > lst->next->content)
			return (0);
		lst = lst->next;
	}
	return (1);
}

// sort_a and b here
void	sort_two(t_list **lst)
{
	if ((*lst)->content > (*lst)->next->content)
		sa(lst);
}

void	sort_three(t_list **lst)
{
	t_list	*cur;
	int		max;

	max = (*lst)->content;
	cur = *lst;
	while (cur)
	{
		if (max < cur->content)
			max = cur->content;
		cur = cur->next;
	}
	if (max == (*lst)->content)
		ra(lst);
	else if (max == (*lst)->next->content)
		rra(lst);
	sort_two(lst);
}

void	sort_four(t_list **left_hand, t_list **right_hand)
{
	t_list	*cur;
	int		min;

	min = (*left_hand)->content;
	cur = *left_hand;
	while (cur)
	{
		if (min > cur->content)
			min = cur->content;
		cur = cur->next;
	}
	while (1)
	{
		if (min == (*left_hand)->next->content)
			ra(left_hand);
		else if (min != (*left_hand)->content)
			rra(left_hand);
		else
			break ;
	}
	pb(right_hand, left_hand);
	sort_three(left_hand);
	pa(left_hand, right_hand);
}

void	sort_five(t_list **left_hand, t_list **right_hand)
{
	t_list *cur;
	int		min;


	min = (*left_hand)->content;
	cur = *left_hand;
	while (cur)
	{
		if (min > cur->content)
			min = cur->content;
		cur = cur->next;
	}
	while (1)
	{
		if (min == (*left_hand)->next->content)
			ra(left_hand);
		else if (min != (*left_hand)->content)
			rra(left_hand);
		else
			break ;
	}
	pb(right_hand, left_hand);
	sort_four(left_hand, right_hand);
	pa(left_hand, right_hand);
}

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

	/*      test mini sort       */
void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int	size;
	(void)stack_b;
	if (sorted(*stack_a))
		return (ft_lstclear(stack_a, del), exit(0));
	size = ft_lstsize(*stack_a);
	if (size <= 5)
		mini_sort(stack_a, stack_b, size);
}
