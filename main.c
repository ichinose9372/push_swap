/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:30:10 by yichinos          #+#    #+#             */
/*   Updated: 2023/01/30 17:47:12 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	t_node	**list_a;
	t_node	**list_b;
	t_node	*tmp;
	int		i;

	list_a = NULL;
	i = 0;
	while (i <= 121)
	{
		tmp = ft_lstnew(i);
		ft_lstadd_back(list_a, tmp);
		i += 11;
	}
	

	return (0);
}