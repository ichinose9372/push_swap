/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:30:26 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/19 22:06:53 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_node	**ft_two_three_sort(t_node **list_a, int argc)
{
	if (argc == 3)
		ft_two_sort(list_a);
	if (argc == 4)
		ft_three_sort(list_a);
	return (list_a);
}

t_node	**ft_four_five_sort(t_node **list_a, t_node **list_b, int argc)
{
	if (argc == 5)
		ft_four_sort(list_a, list_b);
	if (argc == 6)
		ft_five_sort(list_a, list_b);
	return (list_a);
}

t_node	**ft_sort(t_node **list_a, t_node **list_b, nint num)
{
	if (num <= 4)
		ft_two_three_sort(list_a, num);
	else if (5 <= num && num <= 6)
		ft_four_five_sort(list_a, list_b, num);
	else if (num > 6)
		ft_over_six_sort(list_a, list_b);
	return (list_a);
}
