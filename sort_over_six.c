/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_six.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:39:26 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/12 19:08:13 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	helf_push_b(t_node **list_b, t_node **list_a, int block)
{
	int	count;
	int	helf;

	helf = ft_lstsize(*list_a) / 2;
	count = 0;
	while (block)
	{
		if (helf > (*list_a)->index)
		{
			ft_pb(list_b, list_a);
			count++;
			block--;
		}
		else
			ft_ra(list_a);
	}
	return (count);
}

// int	helf_push_a(t_node **list_a, t_node **list_b)
// {
// 	int	lst_size;
// 	int	count;

// 	count = 0;
// 	lst_size = ft_lstsize(*list_b) / 2;
// 	while (lst_size)
// 	{
// 		if (lst_size <= (*list_b)->index)
// 		{
// 			ft_pa(list_a, list_b);
// 			count++;
// 			lst_size--;
// 		}
// 		else
// 			ft_rb(list_b);
// 	}
// 	if (lst_size > 3)
// 		helf_push_a(list_a, list_b);
// 	return (count);
// }

t_node	**ft_over_six_sort(t_node **list_a, t_node **list_b)
{
	int	i;
	// int	j;

	i = helf_push_b(list_b, list_a, ft_lstsize(*list_a)/2);
	// j = helf_push_a(list_a, list_b);
	// if (ft_lstsize(*list_b) == 2)
	// {
	// 	ft_two_sort(list_b);
	// 	ft_pa(list_a, list_b);
	// 	ft_ra(list_a);
	// 	ft_pa(list_a, list_b);
	// 	ft_ra(list_a);
	// }
	// else if (ft_lstsize(*list_b) == 3)
	// {
	// 	ft_two_sort(list_b);
	// 	ft_pa(list_a, list_b);
	// 	ft_ra(list_a);
	// 	ft_pa(list_a, list_b);
	// 	ft_ra(list_a);
	// 	ft_pa(list_a, list_b);
	// 	ft_ra(list_a);
	// }
	// while (j)
	// {
	// 	ft_pb(list_b, list_a);
	// 	j--;
	// }
	// if (ft_lstsize(*list_b) == 2)
	// {
	// 	ft_two_sort(list_b);
	// 	ft_pa(list_a, list_b);
	// 	ft_ra(list_a);
	// 	ft_pa(list_a, list_b);
	// 	ft_ra(list_a);
	// }
	print_list_a(list_a);
	print_list_b(list_b);
	return (list_a);
}
