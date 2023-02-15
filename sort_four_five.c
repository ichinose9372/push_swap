/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:53:47 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/15 17:15:41 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_serch(t_node **list_a)
{
	int	min;

	min = (*list_a)->index;
	while (*list_a)
	{
		if (min > (*list_a)->index)
			min = (*list_a)->index;
		list_a = &(*list_a)->next;
	}
	return (min);
}

int	max_serch(t_node **list_a)
{
	int	max;

	max = (*list_a)->index;
	while (*list_a)
	{
		if (max < (*list_a)->index)
			max = (*list_a)->index;
		list_a = &(*list_a)->next;
	}
	return (max);
}

void	ft_four_sort(t_node **list_a, t_node **list_b, int min)
{
	while (1)
	{
		if ((*list_a)->index == min)
		{
			ft_pb(list_b, list_a);
			break ;
		}
		else
			ft_ra(list_a);
	}
	ft_three_sort(list_a);
	ft_pa(list_a, list_b);
}

void	ft_five_sort(t_node **list_a, t_node **list_b, int min, int max)
{
	int	i;

	i = 0;
	while (1)
	{
		if ((*list_a)->index == min || (*list_a)->index == max)
		{
			ft_pb(list_b, list_a);
			i++;
			if (i == 2)
				break ;
		}
		else
			ft_ra(list_a);
	}
	ft_three_sort(list_a);
	ft_two_sort(list_b);
	ft_pa(list_a, list_b);
	ft_pa(list_a, list_b);
	ft_ra(list_a);
}

t_node	**ft_four_five_sort(t_node **list_a, t_node **list_b, int argc)
{
	if (argc == 5)
		ft_four_sort(list_a, list_b, min_serch(list_a));
	if (argc == 6)
		ft_five_sort(list_a, list_b, min_serch(list_a), max_serch(list_a));
	return (list_a);
}
