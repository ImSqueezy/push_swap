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

int	ft_ismpoperators(int c)
{
	if (c != '+' && c != '-')
		return (0);
	return (1);
}

void	double_clear(char **p)
{
	int	i;

	i = -1;
	while (p[++i])
		free(p[i]);
	free(p);
}

int	arg_checker(int *nbr, char *ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		if (!ft_isdigit(ptr[i]) && !ft_ismpoperators(ptr[i]))
			return (ft_printf("%s", PARSE_ERROR), 0);
		i++;
	}
	*nbr = ft_atoi(ptr);
	return (1);
}

void	arg_translator(char *p, t_list **stack)
{
	char	**splitted_arg;
	int		nbr;
	int		i;

	splitted_arg = ft_split(p, ' ');
	i = 0;
	while (splitted_arg[i])
	{
		if (!arg_checker(&nbr, splitted_arg[i]))
			return (double_clear(splitted_arg), exit(1));
		ft_lstadd_back(stack, ft_lstnew(nbr));
		i++;
	}
}

int	parser(int ac, char **av, t_list **stack)
{
	int	i;

	if (ac == 1)
		return (ft_printf("%s", SYNTAX_ERROR), 0);
	i = 0;
	while (++i < ac)
		arg_translator(av[i], stack);
	return (1);
}
