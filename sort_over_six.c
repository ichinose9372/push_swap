/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_six.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:39:26 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/11 12:53:16 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_hels_count(t_node **list_a)
{
	int	i;

	i = 0;
	while ((*list_a))
	{
		i++;
		(*list_a) = (*list_a)->next;
	}
	return (i / 2);
}

t_node	**ft_over_six_sort(t_node **list_a, t_node **list_b, int argc)
{
	(void) argc;
	int	i;

	i = 0;
	while (i < ft_hels_count(list_a))
	{
		ft_pb(list_b, list_a);
		i++;
	}
	
	return(list_a);
}
