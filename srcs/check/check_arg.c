/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:24:04 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/19 14:08:51 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	str_free(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	check_arg(int argc, char **argv, t_node **list_a, t_node **list_b)
{
	char	**str;
	int		i;

	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		str = ft_split(argv[1], ' ');
		if (str == NULL || *str == '\0')
			ft_error(list_a, list_b);
		i = 0;
		while (str[i] != NULL)
			i++;
		argc = i + 1;
		push_list(list_a, list_b, str);
		ft_cord_comp(argc, str, list_a, list_b);
		return (argc);
	}
	else
	{
		push_list(list_a, list_b, argv + 1);
		ft_cord_comp(argc, argv + 1, list_a, list_b);
		return (argc);
	}
}
