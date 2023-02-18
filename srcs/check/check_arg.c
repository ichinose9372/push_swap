/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:24:04 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/18 16:58:45 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	check_arg(int argc, char **argv, t_node **list_a)
{
	char	**str;
	int		i;

	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		str = ft_split(argv[1], ' ');
		if (str == NULL)
			ft_all_free(list_a);
		i = 0;
		while (str[i] != NULL)
			i++;
		argc = i + 1;
		push_list(list_a, str);
		ft_cord_comp(argc, str, list_a);
		return (argc);
	}
	else
	{
		push_list(list_a, argv + 1);
		ft_cord_comp(argc, argv + 1, list_a);
		return (argc);
	}
}
