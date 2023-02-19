/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:53:47 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/18 17:12:05 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

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

int	min_push(t_node **list_a)
{
	t_node	*tmp;
	int		min;
	int		count;

	min = min_serch(list_a);
	tmp = (*list_a);
	count = 0;
	while (tmp)
	{
		if (tmp->index == min)
			break ;
		count++;
		tmp = tmp->next;
	}
	return (count);
}

void	ft_four_sort(t_node **list_a, t_node **list_b)
{
	int	count;

	count = min_push(list_a);
	if (count == 3)
		ft_rra(list_a);
	if (count == 2)
	{
		ft_rra(list_a);
		ft_rra(list_a);
	}
	if (count == 1)
		ft_ra(list_a);
	ft_pb(list_b, list_a);
	ft_three_sort(list_a);
	ft_pa(list_a, list_b);
}

void	ft_five_sort(t_node **list_a, t_node **list_b)
{
	int	count;

	count = min_push(list_a);
	if (count == 4)
		ft_rra(list_a);
	if (count == 3)
	{
		ft_rra(list_a);
		ft_rra(list_a);
	}
	if (count == 2)
	{
		ft_ra(list_a);
		ft_ra(list_a);
	}
	if (count == 1)
		ft_ra(list_a);
	ft_pb(list_b, list_a);
	ft_four_sort(list_a, list_b);
	ft_pa(list_a, list_b);
}
