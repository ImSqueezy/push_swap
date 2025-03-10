/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <aouaalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:08:07 by aouaalla          #+#    #+#             */
/*   Updated: 2024/11/10 10:38:55 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	long	num;
	int		right_most;
	int		sign;

	num = 0;
	sign = 1;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		right_most = (*str - '0') * sign;
		if (num > (INT_MAX / 10) || (num == (INT_MAX / 10) && right_most > 7))
			return 2147483648 ; 
		if (num < (INT_MIN / 10) || (num == (INT_MIN / 10) && right_most < -8))
			return 2147483648 ; 
		num = num * 10 + right_most;
		str++;
	}
	return (num);
}
