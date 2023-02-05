/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_six.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:53:47 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/05 10:32:18 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_six_sort_next(t_node **list_a, t_node **list_b)
{
	while (*list_b)
	{
		if ((*list_a)->num > (*list_b)->num)
			ft_pa(list_a, list_b);
		else
			list_a = &(*list_a)->next;
	}
}

void	ft_six_sort(t_node **list_a, t_node **list_b, int argc)
{
	int	i;
	int	num;

	num = argc - 4;
	i = 0;
	while (i < num)
	{
		ft_pb(list_b, list_a);
		i++;
	}
	if (num == 3)
	{
		ft_three_sort(list_a);
		ft_three_sort(list_b);
	}
	else if (num == 2)
	{
		ft_three_sort(list_a);
		ft_two_sort(list_b);
	}
	else
		ft_three_sort(list_a);
	ft_six_sort_next(list_a, list_b);
}
