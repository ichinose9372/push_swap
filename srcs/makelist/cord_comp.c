/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cord_comp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:12:06 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/16 18:07:30 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	*ft_make_arry(int argc, char **argv)
{
	int	*arry;
	int	*top;
	int	i;

	arry = malloc(sizeof(int) * (argc - 1));
	if (!arry)
		return (NULL);
	top = arry;
	i = 0;
	while (*argv)
	{
		arry[i] = ft_atoi(*argv);
		i++;
		argv++;
	}
	return (top);
}

t_node	**ft_compression(int *arry, int size, t_node **list_a)
{
	int	i;

	i = 0;
	while ((*list_a))
	{
		i = 0;
		while (i < size)
		{
			if ((*list_a)->num == arry[i])
				(*list_a)->index = i;
			i++;
		}
		list_a = &(*list_a)->next;
	}
	return (list_a);
}

t_node	**ft_cord_comp(int argc, char **argv, t_node **list_a)
{
	int	*arry;

	arry = ft_make_arry(argc, argv);
	ft_sort_int_tab(arry, argc - 1);
	ft_compression(arry, argc - 1, list_a);
	free(arry);
	return (list_a);
}
