/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:17:20 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/03 14:34:24 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	**ft_two_sort(t_node **list_a)
{
	t_node	*tmp;

	tmp = (*list_a)->next;
	if ((*list_a)-> num > tmp->num)
		ft_sa(list_a);
	return (list_a);
}
