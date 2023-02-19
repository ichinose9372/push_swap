/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:53:48 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/19 13:19:08 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_all_free(t_node **list_a, t_node **list_b)
{
	t_node	*tmp;
	int		i;

	i = 0;
	while (*list_a)
	{
		tmp = (*list_a)->next;
		free(*list_a);
		*list_a = tmp;
	}
	free(list_a);
	free(list_b);
}
