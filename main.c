/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:30:10 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/03 17:00:57 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_node **list_a)
{
	while ((*list_a) != NULL)
	{
		printf("a = %d\t:\t%p\n", (*list_a)->num, (*list_a)->next);
		list_a = &(*list_a)->next;
	}
	while ((*list_a) != NULL)
		list_a = &(*list_a)->prev;
}

int	main(int argc, char **argv)
{
	t_node	**list_a;
	t_node	**list_b;

	list_a = ft_make_list(list_a);
	list_b = ft_make_list(list_b);
	if (argc > 2)
	{
		push_list(list_a, argc, argv);
		print_list(list_a);
		if (argc == 3)
			ft_two_sort(list_a);
		else if (argc == 4)
			ft_three_sort(list_a);
		else if (argc == 5)
			ft_four_sort(list_a, list_b);
	}
	print_list(list_a);
	// ft_ra(list_a);
	// print_list(list_a);
	// ft_rra(list_a);
	// print_list(list_a);
	return (0);
}

