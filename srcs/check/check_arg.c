/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:24:04 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/24 11:33:40 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	split_push(char	*argv, t_node **list_a, t_node **list_b)
{
	char	**str;
	int		i;
	int		num;

	num = 0;
	str = ft_split(argv, ' ');
	if (str == NULL || *str == 0)
		ft_error(list_a, list_b);
	i = 0;
	while (str[i])
		i++;
	num += i;
	push_list(list_a, list_b, str);
	str_free(str);
	return (num);
}

int	check_arg(int argc, char **argv, t_node **list_a, t_node **list_b)
{
	int		i;
	int		num;

	num = 0;
	if (argc == 1)
		return (0);
	else
	{
		i = 1;
		while (argv[i])
		{
			num += split_push(argv[i], list_a, list_b);
			i++;
		}
	}
	return (num + 1);
}
