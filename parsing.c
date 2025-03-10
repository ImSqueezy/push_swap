/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:12:36 by aouaalla          #+#    #+#             */
/*   Updated: 2025/02/27 15:12:37 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*

it returns error if a non digit found in the string
unless the first char is + or -

*/

static int	arg_checker(char *ptr)
{
	unsigned int	i;
	
	i = 0;
	if (!ft_isdigit(ptr[0]) && ft_ismpoperators(ptr[0]))
		i++;
	if (ptr[i] == '\0')
			return (0);
	while (ptr[i])
	{
		if (!ft_isdigit(ptr[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	duplicates_checker(t_list **head, int num)
{
    t_list *current;

	current = *head;
    while (current)
	{
        if (current->content == num)
            return (0);
        current = current->next;
    }
    return (1);
}

/*

splits the arg "  9 3 34444" to "9" "3" "34444"
pass it to arg_checker which checks for errors
if no error found the number is being added to statck A
before that duplicates is check using duplicates_checker

>> leaks must be handled

*/

void	data_indexer(t_list *lst)
{
	t_list			*cur;
	t_list			*next;

	next = lst;
	while (next)
	{
		cur = lst;
		while (cur)
		{
			if (next->content > cur->content)
				next->index++;
			cur = cur->next;
		}
		next = next->next;
	}
}


static void	arg_translator(char *p, t_list **stack)
{
	char			**doubly;
	long			num;
	unsigned int	j;

	doubly = ft_split(p, ' ');
	j = 0;
	while (doubly[j])
	{
		if (!arg_checker(doubly[j]))
			return (ft_lstclear(stack, del), parse_error(doubly));
		num = ft_atoi(doubly[j]);
		if (num == FAIL_FLAG)
			return (ft_lstclear(stack, del), parse_error(doubly));
		if (!duplicates_checker(stack, num))
			return (ft_lstclear(stack, del), parse_error(doubly));
		ft_lstadd_back(stack, ft_lstnew(num));
		j++;
	}
	if (j == 0)
	return (ft_lstclear(stack, del), parse_error(doubly));
	free_doubly(doubly);
}

int	parser(int ac, char **av, t_list **stack)
{
	int	i;
	
	if (ac == 1)
	return (write(2, "Error", 5), 1);
	i = 0;
	while (++i < ac)
	arg_translator(av[i], stack);
	data_indexer(*stack);
	return (1);
}
