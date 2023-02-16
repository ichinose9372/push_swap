/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:16:37 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/16 18:08:17 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

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

t_node	**push_list(t_node **list_a, char **argv)
{
	t_node	*tmp;
	long	num;

	while (*argv)
	{
		// if (!(ft_isdigit(**argv) || (**argv) == '+' || (**argv) == '-'))
		// 	ft_error();
		num = ft_atoi(*argv);
		if (num > LONG_MAX || num < LONG_MIN)
			ft_error();
		tmp = ft_lstnew((int)num);
		ft_lstadd_back(list_a, tmp);
		argv++;
	}
	return (list_a);
}
