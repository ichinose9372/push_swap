/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:30:10 by yichinos          #+#    #+#             */
/*   Updated: 2023/01/30 22:22:28 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	t_node	**list_a;
	t_node	**list_b;
	t_node	*tmp;
	int		i;

	list_a = malloc(sizeof(t_node *));
	if (list_a == NULL)
		return (0);
	i = 11;
	while (i < 56)
	{
		tmp = ft_lstnew(i);
		ft_lstadd_back(list_a, tmp);
		i += 11;
	}
	tmp = (*list_a);
	while ((*list_a) != NULL)
	{
		printf("%d\t%p\n", (*list_a)->num, *list_a);
		list_a = &(*list_a)->next;
	}
	(*list_a) = tmp;
	list_b = malloc(sizeof(t_node *));
	if (list_b == NULL)
		return (0);
	while ((*list_a) != NULL)
	{
		ft_lstadd_front(list_b, (*list_a));
		printf("%d\t%p\n", (*list_b)->num, (*list_b));
		list_a = &(*list_a)->next;
	}
	// ft_lstadd_front(list_b, (*list_a));
	// list_a = &(*list_a)->next;
	// ft_lstadd_front(list_b, (*list_a));
	// printf("%d\t%p\n%d\t%p\n", (*list_b)->num, (*list_b), (*list_b)->next->num, (*list_b)->next);
	return (0);
}
