/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 21:51:19 by aouaalla          #+#    #+#             */
/*   Updated: 2025/03/01 21:51:20 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	parse_error(char **p)
{
	write(2, "Error\n", 6);
	free_doubly(p);
	exit(1);
}

void	del(void *ptr)
{
	free(ptr);
}

void	free_doubly(char **ptr)
{
	while (*ptr)
	{
		free(*ptr);
		*ptr = NULL;
	}
	free(ptr);
	ptr = NULL;
}

int	ft_ismpoperators(int c)
{
	if (c != '+' && c != '-')
		return (0);
	return (1);
}
