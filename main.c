/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:30:10 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/01 23:46:32 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_node **list_a)
{
	while ((*list_a) != NULL)
	{
		printf("a = %d\t:\t%p\n", (*list_a)->num, (*list_a));
		list_a = &(*list_a)->next;
	}
	while ((*list_a) != NULL)
		list_a = &(*list_a)->prev;
}

int	main(void)
{
	t_node	**list_a;
	t_node	**list_b;
	t_node	*tmp;
	int		i;

	list_a = malloc(sizeof(t_node));
	if (list_a == NULL)
		return (0);
	*list_a = NULL;
	i = 11;
	while (i < 34)
	{
		tmp = ft_lstnew(i);
		ft_lstadd_back(list_a, tmp);
		i += 11;
	}
	list_b = malloc(sizeof(t_node));
	if (list_b == NULL)
		return (0);
	*list_b = NULL;
	print_list(list_a);
	ft_ra(list_a);
	print_list(list_a);
	ft_rra(list_a);
	print_list(list_a);
	return (0);
}

