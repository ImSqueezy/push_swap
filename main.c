/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:13:57 by aouaalla          #+#    #+#             */
/*   Updated: 2025/02/27 15:13:57 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_lst	*A;
	t_lst	*B;

	// the program is taking an unkown number of args
	// all has to be just numbers and no duplicates
	(void)A;
	(void)B;
	A = NULL;
	parser(argc, argv, A);
	return (0);
}