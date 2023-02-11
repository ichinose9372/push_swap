/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:16:37 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/09 14:48:50 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_lstnew(int data)
{
	t_node	*ndptr;

	ndptr = malloc(sizeof(t_node));
	if (!ndptr)
		return (NULL);
	ndptr->prev = NULL;
	ndptr->num = data;
	ndptr->next = NULL;
	return (ndptr);
}

t_node	**ft_make_list(t_node **list_a)
{
	list_a = malloc(sizeof(t_node *));
	*list_a = NULL;
	return (list_a);
}

t_node	**push_list(t_node **list_a, int argc, char **argv)
{
	t_node	*tmp;
	long	num;
	int		i;

	i = 1;
	while (i < argc)
	{
		if (!(ft_isdigit(*argv[i])))
			ft_error();
		num = ft_atoi(argv[i]);
		if (num > LONG_MAX || num < LONG_MIN)
			ft_error();
		tmp = ft_lstnew(num);
		ft_lstadd_back(list_a, tmp);
		i++;
	}
	return (list_a);
}
