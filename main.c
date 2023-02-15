/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:30:10 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/15 17:32:27 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list_a(t_node **list_a)
{
	while ((*list_a) != NULL)
	{
		printf("a = [%d] %d\t:\t%p\t%p\t%p\n",
			(*list_a)->index, (*list_a)->num, (*list_a)->prev,
			(*list_a), (*list_a)->next);
		list_a = &(*list_a)->next;
	}
	while ((*list_a) != NULL)
		list_a = &(*list_a)->prev;
}

void	print_list_b(t_node **list_a)
{
	while ((*list_a) != NULL)
	{
		printf("b = [%d] %d\t:\t%p\t%p\t%p\n",
			(*list_a)->index, (*list_a)->num, (*list_a)->prev,
			(*list_a), (*list_a)->next);
		list_a = &(*list_a)->next;
	}
	while ((*list_a) != NULL)
		list_a = &(*list_a)->prev;
}

int	main(int argc, char **argv)
{
	t_node	**list_a;
	t_node	**list_b;

	list_a = NULL;
	list_b = NULL;
	list_a = ft_make_list(list_a);
	list_b = ft_make_list(list_b);
	if (argc == 1)
		return (0);
	else if (argc == 2)
		return (0);
	else if (argc > 2)
	{
		push_list(list_a, argc, argv);
		ft_cord_comp(argc, argv, list_a);
		if (argc <= 4)
			ft_two_three_sort(list_a, argc);
		else if (5 <= argc && argc <= 6)
			ft_four_five_sort(list_a, list_b, argc);
		else
			ft_over_six_sort(list_a, list_b);
	}
	else
		ft_error();
	//print_list_a(list_a);
	return (0);
}
