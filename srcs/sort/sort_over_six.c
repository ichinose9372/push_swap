/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_six.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:39:26 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/18 23:39:55 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	helf_push_b(t_node **list_b, t_node **list_a, int min_index, int max_index)
{
	int	count;
	int	h_size;

	h_size = max_index - min_index;
	count = 0;
	while (1)
	{
		if ((*list_a)->index >= min_index && (*list_a)->index < max_index)
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
	int	i;
	int	h_size;
	int	count;

	h_size = (min_serch(list_b) + max_serch(list_b)) / 2;
	count = ft_lstsize(*list_b) / 2;
	i = 0;
	while (i < count)
	{
		if ((*list_b)->index > h_size)
		{
			ft_pa(list_a, list_b);
			i++;
		}
		else
			ft_rb(list_b);
	}
	return (i);
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
		ft_two_three_sort_b(list_b, size + 1);
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
