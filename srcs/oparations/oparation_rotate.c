/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oparation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:21:59 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/16 16:19:12 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_rotate(t_node **list_a)
{
	t_node	*tmp;
	t_node	*cp;

	cp = (*list_a)->next;
	tmp = ft_lstlast(*list_a);
	tmp->next = (*list_a);
	(*list_a)->prev = tmp;
	(*list_a)->next = NULL;
	cp->prev = NULL;
	*list_a = cp;
}

void	ft_ra(t_node **list_a)
{
	ft_rotate(list_a);
	ft_printf("ra\n");
}

void	ft_rb(t_node **list_b)
{
	ft_rotate(list_b);
	ft_printf("rb\n");
}
