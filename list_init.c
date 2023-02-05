/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:16:37 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/05 10:38:37 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	**ft_make_list(t_node **list_a)
{
	t_node	**tmp;

	tmp = malloc(sizeof(t_node *));
	*tmp = NULL;
	return (tmp);
}

t_node	**push_list(t_node **list_a, int ac, char **av)
{
	t_node	*tmp;
	int		i;

	i = 1;
	if (ac == 0 || ac == 1)
	{
		printf("error !\n");
		exit(1);
	}
	while (i < ac)
	{
		tmp = ft_lstnew(ft_atoi(av[i]));
		ft_lstadd_back(list_a, tmp);
		i++;
	}
	return (list_a);
}
