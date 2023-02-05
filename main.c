/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:30:10 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/05 10:31:20 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list_a(t_node **list_a)
{
	while ((*list_a) != NULL)
	{
		printf("a = %d\t:\t%p\t%p\t%p\n", (*list_a)->num, (*list_a)->prev, (*list_a), (*list_a)->next);
		list_a = &(*list_a)->next;
	}
	while ((*list_a) != NULL)
		list_a = &(*list_a)->prev;
}

void	print_list_b(t_node **list_a)
{
	while ((*list_a) != NULL)
	{
		printf("b = %d\t:\t%p\t%p\t%p\n", (*list_a)->num, (*list_a)->prev, (*list_a), (*list_a)->next);
		list_a = &(*list_a)->next;
	}
	while ((*list_a) != NULL)
		list_a = &(*list_a)->prev;
}

int	main(int argc, char **argv)
{
	t_node	**list_a;
	t_node	**list_b;
	t_node	*tmp;

	list_a = ft_make_list(list_a);
	list_b = ft_make_list(list_b);
	if (argc > 2)
	{
		push_list(list_a, argc, argv);
		print_list_a(list_a);
		if (argc == 3)
			ft_two_sort(list_a);
		else if (argc == 4)
			ft_three_sort(list_a);
		else if (argc >= 5 && argc <= 6)
			ft_six_sort(list_a, list_b, argc);
		else if (argc >= 8)
			ft_over_seven_sort()
	}
	print_list_a(list_a);
	// print_list_b(list_b);
	return (0);
}

