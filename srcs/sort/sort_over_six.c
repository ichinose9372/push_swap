/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_six.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:39:26 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/16 16:19:22 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	helf_push_b(t_node **list_b, t_node **list_a, int min, int max)
{
	int	count;
	int	h_size;

	h_size = max - min;
	count = 0;
	while (1)
	{
		if ((*list_a)->index >= min && (*list_a)->index < max)
		{
			ft_pb(list_b, list_a);
			h_size--;
			if (h_size == 0)
				break ;
		}
		else
			ft_ra(list_a);
	}
	return (count);
}

int	helf_push_a(t_node **list_a, t_node **list_b)
{
	int	max;
	int	count;
	int	h_size;

	count = 0;
	h_size = ft_lstsize(*list_b) / 2;
	max = max_serch(list_b);
	while (1)
	{
		if ((*list_b)->index == max)
		{
			ft_pa(list_a, list_b);
			count++;
			max--;
			if (count == h_size)
				break ;
		}
		else
			ft_rb(list_b);
	}
	return (count);
}

void	push_rotate(t_node **list_a, t_node **list_b, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		ft_pa(list_a, list_b);
		ft_ra(list_a);
		i++;
	}
}

void	sort_list_b(t_node **list_a, t_node **list_b)
{
	int	size;
	int	count;

	size = ft_lstsize(*list_b);
	if (size >= 4)
	{
		count = helf_push_a(list_a, list_b);
		sort_list_b(list_a, list_b);
		while (count)
		{
			ft_pb(list_b, list_a);
			count--;
		}
		sort_list_b(list_a, list_b);
	}
	else if (size == 3 || size == 2)
	{
		ft_two_three_sort(list_b, size + 1);
		push_rotate(list_a, list_b, size);
	}
}

t_node	**ft_over_six_sort(t_node **list_a, t_node **list_b)
{
	int	count;
	int	h_size;

	h_size = ft_lstsize(*list_a) / 2;
	count = ft_lstsize(*list_a);
	helf_push_b(list_b, list_a, 0, h_size);
	sort_list_b(list_a, list_b);
	helf_push_b(list_b, list_a, h_size, count);
	sort_list_b(list_a, list_b);
	return (list_a);
}
