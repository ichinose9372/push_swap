/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:16:37 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/28 12:49:27 by yichinos         ###   ########.fr       */
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
	ndptr->index = 0;
	ndptr->next = NULL;
	return (ndptr);
}

t_node	**ft_make_list(t_node **list_a)
{
	list_a = malloc(sizeof(t_node *));
	if (list_a == NULL)
		exit(EXIT_FAILURE);
	*list_a = NULL;
	return (list_a);
}

t_node	**push_list(t_node **list_a, t_node **list_b, char **argv)
{
	t_node	*tmp;
	long	num;

	while (*argv)
	{
		if (!(**argv >= '0' && **argv <= '9')
			&& !(**argv == '+') && !(**argv == '-'))
			ft_error(list_a, list_b);
		num = push_swap_atoi(*argv, list_a, list_b);
		tmp = ft_lstnew((int)num);
		if (tmp == NULL)
			ft_error(list_a, list_b);
		ft_lstadd_back(list_a, tmp);
		argv++;
	}
	return (list_a);
}
