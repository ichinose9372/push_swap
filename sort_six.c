/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_six.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:53:47 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/07 20:19:59 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	**ft_six_sort_next(t_node **list_a, t_node **list_b)
{
	int	count;

	count = 0;
	while (list_b)
	{
		if ((*list_a)->num > (*list_b)->num)
		{
			ft_pa(list_a, list_b);
			while (count)
			{
				ft_rra(list_a);
				count--;
			}
		}
		else
		{
			ft_ra(list_a);
			count++;
		}
	}
	return (list_a);
}

t_node	**ft_six_sort(t_node **list_a, t_node **list_b, int argc)
{
	int	num;
	int	i;

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
	if (num == 2)
	{
		ft_three_sort(list_a);
		ft_two_sort(list_b);
	}
	if (num == 1)
		ft_three_sort(list_a);
	print_list_a(list_a);
	print_list_b(list_b);
	//ft_six_sort_next(list_a, list_b);
	return (list_a);
}
