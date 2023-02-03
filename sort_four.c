/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:53:47 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/03 17:06:37 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_four_sort(t_node **list_a, t_node **list_b)
{
	ft_pb(list_b, list_a);
	ft_three_sort(list_a);
	ft_pa(list_a, list_b);
	//1
	// ft_pa(list_a);
	//2
	// ft_pa(list_a);
	// ft_sa(list_a);
	//3
	// ft_rra(list_a);
	// ft_sa(list_a);
	// ft_ra(list_a);


}
