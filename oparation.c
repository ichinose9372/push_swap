/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oparation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:59:31 by yichinos          #+#    #+#             */
/*   Updated: 2023/01/31 15:45:20 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_node **list_a)
{
	t_node	*tmp;

	if ((*list_a) && (*list_a)->next)
	{
		tmp = (*list_a)->next;
		(*list_a)->next = tmp->next;
		tmp->next = (*list_a);
		(*list_a) = tmp;
	}
}

void	ft_sa(t_node **list_a)
{
	ft_swap(list_a);
	ft_printf("sa\n");
}

