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

void	arg_checker(int *nbr, char *ptr)
{
	// pass the string to atoi
	// and check for unwanted chars
}

void	arg_translator(char *p, t_lst *stack)
{
	char	**splitted_arg;
	int		nbr;
	int		i;

	splitted_arg = ft_split(p, ' ');
	i = 0;
	while (splitted_arg[i])
	{
		arg_checker(&nbr, splitted_arg[i]);
		i++;	
	}
}

int	parser(int ac, char **av, t_lst *stack)
{
	int	i;

	(void)stack;
	if (ac == 1)
		return (ft_printf("%s", SYNTAX_ERROR), 0);
	i = 0;
	while (++i < ac)
		arg_translator(av[i], stack);
	// the whole strings are processed no error found
	// time to store data into stack
	i = 0;
	while (++i < ac)
	return (1);
}