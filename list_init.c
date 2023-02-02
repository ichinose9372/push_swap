/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:16:37 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/03 00:42:16 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_make_list(t_node **list_a, t_node **list_b)
// {
// 	list_a = malloc(sizeof(t_node *));
// 	if (!list_a)
// 	{
// 		printf("error  AAAAAA!\n");
// 		return (exit(1));
// 	}
// 	*list_a = NULL;
// 	printf("%p\n", (list_a));
// 	list_b = malloc(sizeof(t_node *));
// 	if (!list_b)
// 	{
// 		printf("error BBBBBB!\n");
// 		return (exit(1));
// 	}
// 	*list_b = NULL;
// 	printf("%p\n", (list_b));
// }

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
