/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_six.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:53:47 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/08 13:56:46 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_serch(t_node **list_a)
{
	int	min;

	min = (*list_a)->num;
	while (*list_a)
	{
		if (min > (*list_a)->num)
			min = (*list_a)->num;
		list_a = &(*list_a)->next;
	}
	return (min);
}


int	max_serch(t_node **list_a)
{
	int	max;

	max = (*list_a)->num;
	while (*list_a)
	{
		if (max < (*list_a)->num)
			max = (*list_a)->num;
		list_a = &(*list_a)->next;
	}
	return (max);
}

void	ft_four_sort(t_node **list_a, t_node **list_b)
{
	ft_two_sort(list_a);
	ft_two_sort(list_b);
	ft_pa(list_a, list_b);
	ft_pa(list_a, list_b);
	ft_ra(list_a);
}

void	ft_five_sort(t_node **list_a, t_node **list_b)
{
	ft_two_sort(list_b);
	ft_three_sort(list_a);
	ft_pa(list_a, list_b);
	ft_pa(list_a, list_b);
	ft_ra(list_a);
}


t_node	**ft_four_five_sort(t_node **list_a, t_node **list_b, int argc)
{
	int	min;
	int	max;
	int	count;

	min = min_serch(list_a);
	max = max_serch(list_a);
	count = 0;
	while (1)
	{
		if ((*list_a)->num == min || (*list_a)->num == max)
		{
			ft_pb(list_b, list_a);
			count++;
			if (count == 2)
				break ;
		}
		else
			ft_ra(list_a);
	}
	if (argc == 5)
		ft_four_sort(list_a, list_b);
	if (argc == 6)
		ft_five_sort(list_a, list_b);
	return (list_a);
}
