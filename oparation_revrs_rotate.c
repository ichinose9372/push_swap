/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oparation_revrs_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:32:25 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/03 23:09:43 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rev_rotate(t_node **list_a)
{
	t_node	*tmp;

	tmp = ft_lstlast(*list_a);
	(tmp->prev)->next = NULL;
	(*list_a)->prev = tmp;
	tmp->next = (*list_a);
	(*list_a) = (*list_a)->prev;
	(*list_a)->prev = NULL;
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
