/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_six_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:41:59 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/18 11:38:17 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	push_rotate(t_node **list_a, t_node **list_b, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		ft_pa(list_a, list_b);
		ft_ra(list_a);
		i++;
	}
}

t_node	**ft_two_sort_b(t_node **list_b)
{
	t_node	*tmp;

	tmp = (*list_b)->next;
	if ((*list_b)-> num > tmp->num)
		ft_sb(list_b);
	return (list_b);
}

t_node	**ft_three_sort_next_b(t_node	**list_b, t_node *tmp)
{
	if ((*list_b)->num < (tmp->next)->num && tmp->num > (tmp->next)->num)
	{
		ft_sb(list_b);
		ft_rb(list_b);
	}
	else if ((*list_b)->num > (tmp->next)->num)
		ft_rrb(list_b);
	(*list_b)->prev = NULL;
	return (list_b);
}

t_node	**ft_three_sort_b(t_node **list_b)
{
	t_node	*tmp;

	tmp = (*list_b)->next;
	if ((*list_b)->num > tmp->num)
	{
		if ((tmp->num < (tmp->next)->num) && (*list_b)->num < (tmp->next)->num)
			ft_sb(list_b);
		else if ((tmp->num < (tmp->next)->num) && (*list_b)->num
			> (tmp->next)->num)
			ft_rb(list_b);
		else if (tmp->num > (tmp->next)->num)
		{
			ft_sb(list_b);
			ft_rrb(list_b);
		}
	}
	else
		ft_three_sort_next_b(list_b, tmp);
	return (list_b);
}

t_node	**ft_two_three_sort_b(t_node **list_b, int argc)
{
	if (argc == 3)
		ft_two_sort_b(list_b);
	if (argc == 4)
		ft_three_sort_b(list_b);
	return (list_b);
}
