/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:30:10 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/19 13:19:54 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

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
	argc = check_arg(argc, argv, list_a, list_b);
	if (argc == 0)
	{
		ft_sucess(list_a, list_b);
		return (0);
	}
	ft_sort(list_a, list_b, argc);
	ft_sucess(list_a, list_b);
	return (0);
}

// __attribute__((destructor)) static void destructor()
// {
//     system("leaks -q push_swap");
// }
