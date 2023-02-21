/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:37:26 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/21 15:37:14 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_sorted(t_node **list_a)
{
	int	index;

	index = 0;
	while ((*list_a))
	{
		if ((*list_a)->index == index)
		{
			index++;
			list_a = &(*list_a)->next;
		}
		else
			return (0);
	}
	return (1);
}
