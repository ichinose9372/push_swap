/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oparation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:43:33 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/02 10:08:51 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_list(t_node **list_b, t_node **list_a)
{
	t_node	*temp;

	temp = (*list_a);
	if (*list_a)
	{
		(*list_a) = (*list_a)->next;
		temp->next = (*list_b);
		if ((*list_b) != NULL)
		{
			(*list_b)->prev = temp;
			(*list_b) = temp;
		}
		else
		{
			(*list_b) = temp;
			(*list_b)->prev = NULL;
		}
	}
}

void	ft_pb(t_node **list_b, t_node **list_a)
{
	ft_push_list(list_b, list_a);
	ft_printf("pb\n");
}

void	ft_pa(t_node **list_a, t_node **list_b)
{
	ft_push_list(list_a, list_b);
	ft_printf("pa\n");
}
