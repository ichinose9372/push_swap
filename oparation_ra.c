/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oparation_ra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:21:59 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/01 23:31:33 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_node **list_a)
{
	t_node	*temp;
	t_node	*cp;

	temp = (*list_a);
	(*list_a) = (*list_a)->next;
	cp = (*list_a)->next;
	cp->next = temp;
	temp->prev = cp;
	temp->next = NULL;
}

void	ft_ra(t_node **list_a)
{
	ft_rotate(list_a);
	ft_printf("ra\n");
}
