/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:53:48 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/18 23:50:47 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_all_free(t_node **list_a)
{
	t_node	*tmp;

	while (*list_a)
	{
		tmp = (*list_a)->next;
		free(*list_a);
		list_a = &tmp;
	}
	free(list_a);
}
