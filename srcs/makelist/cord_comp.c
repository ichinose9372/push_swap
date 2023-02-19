/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cord_comp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:12:06 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/19 20:28:40 by ichinoseyuu      ###   ########.fr       */
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

int	*ft_make_arry(t_node **list_a)
{
	int	*arry;
	int	*top;
	int	i;

	arry = malloc(sizeof(int) * ft_lstsize(*list_a));
	if (!arry)
		return (NULL);
	top = arry;
	i = 0;
	while (*list_a)
	{
		arry[i] = (*list_a)->num;
		i++;
		list_a = &(*list_a)->next;
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

t_node	**ft_cord_comp(t_node **list_a, t_node **list_b)
{
	int	*arry;

	arry = ft_make_arry(list_a);
	if (!arry)
	{
		ft_all_free(list_a, list_b);
		exit(1);
	}
	ft_sort_int_tab(arry, ft_lstsize(*list_a));
	ft_compression(arry, ft_lstsize(*list_a), list_a);
	free(arry);
	return (list_a);
}
