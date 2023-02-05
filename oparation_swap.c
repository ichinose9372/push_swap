/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oparation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:59:31 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/04 18:03:05 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_node **list_a)
{
	t_node	*tmp;

	if ((*list_a) && (*list_a)->next)
	{
		tmp = *list_a;
		*list_a = (*list_a)->next;
		tmp->next = (*list_a)->next;
		tmp->prev = (*list_a);
		((tmp->next)->prev) = tmp;
		(*list_a)->next = tmp;
		(*list_a)->prev = NULL;
	}
}

void	ft_sa(t_node **list_a)
{
	ft_swap(list_a);
	ft_printf("sa\n");
}

void	ft_sb(t_node **list_b)
{
	ft_swap(list_b);
	ft_printf("pb\n");
}
