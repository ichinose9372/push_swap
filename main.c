/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:30:10 by yichinos          #+#    #+#             */
/*   Updated: 2023/01/31 21:13:10 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	while (i < 56)
	{
		tmp = ft_lstnew(i);
		ft_lstadd_back(list_a, tmp);
		i += 11;
	}
	list_b = malloc(sizeof(t_node));
	if (list_b == NULL)
		return (0);
	ft_lstadd_front(list_b, list_a);
	printf("b = %d\t%p\n", (*list_b)->num, (*list_b));
	ft_lstadd_front(list_b, list_a);
	printf("b = %d\t%p\n", (*list_b)->num, (*list_b));
	ft_lstadd_front(list_b, list_a);
	printf("b = %d\t%p\n", (*list_b)->num, (*list_b));
	ft_lstadd_front(list_b, list_a);
	printf("b = %d\t%p\n", (*list_b)->num, (*list_b));
	ft_lstadd_front(list_b, list_a);
	printf("b = %d\t%p\n", (*list_b)->num, (*list_b));
	printf("a = %p\n", (*list_a));
	return (0);
}

