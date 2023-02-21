/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:52:04 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/21 17:03:10 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	ft_isspace(char c)
{
	c = (unsigned char)c;
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

int	push_swap_atoi(const char *nptr, t_node **list_a, t_node **list_b)
{
	int		type;
	long	number;

	type = 1;
	number = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			type *= -1;
		nptr++;
		if (*nptr == '+' || *nptr == '-')
			return (0);
	}
	while (ft_isdigit(*nptr))
	{
		number *= 10;
		number += *nptr - '0';
		nptr++;
	}
	if (number * type > INT_MAX || number * type < INT_MIN)
		ft_error(list_a, list_b);
	return (number * type);
}
