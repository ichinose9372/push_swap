/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_six.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:39:26 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/11 17:57:30 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_hels_count(t_node **list_a)
{
	int	count;

	count = 0;
	while ((*list_a))
	{
		list_a = &(*list_a)->next;
		count++;
		printf("aaaaa\n");
	}
	while ((*list_a))
		list_a = &(*list_a)->prev;
	printf("count = %d\n", count);
	return (count / 2);
}

void	helf_push_b(t_node **list_b, t_node **list_a)
{
	int	helf;
	int	i;

	i = 0;
	helf = ft_hels_count(list_a);
	printf("helf = %d\n", helf);
	while (1)
	{
		if (helf >= (*list_a)->index)
		{
			ft_pb(list_b, list_a);
			if (i == helf)
				break ;
			i++;
		}
		else
			ft_ra(list_a);
	}
}

void	helf_push_a(t_node **list_a, t_node **list_b)
{
	int	helf;
	int	i;

	i = 0;
	helf = ft_hels_count(list_b);
	printf("helf = %d\n", helf);
	while (1)
	{
		if (helf >= (*list_a)->index)
		{
			ft_pa(list_a, list_b);
			if (i == helf)
				break ;
			i++;
		}
		else
		{
			ft_rb(list_a);
			break ;
		}
	}
}

t_node	**ft_over_six_sort(t_node **list_a, t_node **list_b, int argc)
{
	(void)argc;
	helf_push_b(list_b, list_a);
	helf_push_a(list_a, list_b);
	print_list_a(list_a);
	print_list_b(list_b);
	return (list_a);
}
