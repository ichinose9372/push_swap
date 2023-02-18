/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:30:26 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/18 14:33:48 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_node	**ft_sort(t_node **list_a, t_node **list_b, int	num)
{
	if (num <= 4)
		ft_two_three_sort(list_a, num);
	else if (5 <= num && num <= 6)
		ft_four_five_sort(list_a, list_b, num);
	else if (num > 6)
		ft_over_six_sort(list_a, list_b);
	return (list_a);
}
