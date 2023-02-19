/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:31:50 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/19 12:42:30 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_error(t_node **list_a, t_node **list_b)
{
	ft_all_free(list_a, list_b);
	ft_printf("Error\n");
	exit(1);
}

void	ft_sucess(t_node **list_a, t_node **list_b)
{
	ft_all_free(list_a, list_b);
	exit(0);
}
