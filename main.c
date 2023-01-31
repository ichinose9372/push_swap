/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:30:10 by yichinos          #+#    #+#             */
/*   Updated: 2023/01/31 18:11:07 by yichinos         ###   ########.fr       */
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
	while (i < 34)
	{
		tmp = ft_lstnew(i);
		ft_lstadd_back(list_a, tmp);
		i += 11;
	}
	list_b = malloc(sizeof(t_node));
	if (list_b == NULL)
		return (0);
	ft_lstadd_front(list_b, list_a);
	ft_lstadd_front(list_b, list_a);
	ft_lstadd_front(list_b, list_a);
	ft_lstadd_front(list_b, list_a);
	printf("%d\t%p\n", (*list_b)->num, (*list_b));
	return (0);
}
