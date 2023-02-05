/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oparation_revrs_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:32:25 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/04 18:10:47 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rev_rotate(t_node **list_a)
{
	t_node	*last;
	t_node	*tmp;

	last = ft_lstlast(*list_a);
	tmp = last->prev;
	tmp->next = NULL;
	last->next = (*list_a);
	(*list_a)->prev = last;
	last->prev = NULL;
	*list_a = last;
}

void	ft_rra(t_node **list_a)
{
	ft_rev_rotate(list_a);
	ft_printf("rra\n");
}

void	ft_rrb(t_node **list_b)
{
	ft_rev_rotate(list_b);
	ft_printf("rrb\n");
}
