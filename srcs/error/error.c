/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:31:50 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/19 21:55:30 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_error(t_node **list_a, t_node **list_b)
{
	ft_all_free(list_a, list_b);
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void	ft_sucess(t_node **list_a, t_node **list_b)
{
	ft_all_free(list_a, list_b);
	exit(EXIT_SUCCESS);
}
