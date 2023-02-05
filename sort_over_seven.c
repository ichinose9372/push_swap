/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_seven.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:39:26 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/05 14:59:09 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_over_seven_sort(t_node **list_a, t_node **list_b, int argc)
{
	int	list_size;
	int	max_a_size;

	list_size = ft_lstsize(*list_a);
	max_a_size = argc - list_size + 2;
	while (max_a_size < list_size)
	{
		ft_pb(list_b, list_a);
		list_size--;
	}
	ft_three_sort(list_a);
	ft_six_sort_next(list_a, list_b);
}
