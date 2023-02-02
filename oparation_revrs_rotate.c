/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oparation_revrs_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:32:25 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/02 23:15:05 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rev_rotate(t_node **list_a)
{
	t_node	*temp;
	t_node	*cp;

	temp = (*list_a);
	(*list_a) = (*list_a)->next;
	cp = (*list_a)->next;
	cp->next = temp;
	temp->prev = cp;
	(*list_a)->next = NULL;
	(*list_a) = cp;
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
