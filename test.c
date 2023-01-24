/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:34:18 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/01/24 11:53:32 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

typedef struct s_stac {

	int	array[MAX_LENGTH];
	int	current;
}t_stac;

void	init(t_stac *stac)
{
	int	i;

	i = 0;
	while (i < MAX_LENGTH)
	{
		stac->array[i] = 0;
		i++;
	}
	stac->current = 0;
}

int	ft_push(t_stac *stac, int num)
{
	if (stac->current < MAX_LENGTH)
	{
		stac->array[stac->current] = num;
		stac->current++;
	}
	else
		printf("error!\n");
	return (0);
}

int	ft_pop(t_stac *stac)
{
	int	num;

	if (stac->current > 0)
	{
		num = stac->array[stac->current - 1];
		stac->current--;
		return (num);
	}
	else
	{
		printf("nothing!\n");
		return (0);
	}
}

void	sa(t_stac *stac)
{
	int	tmp;

	tmp = stac->array[0];
	stac->array[0] = stac->array[2];
	stac->array[2] = tmp;
}

int	main(int argc, char **argv)
{
	t_stac	stac;
	int		value;
	int		i;

	init(&stac);
	i = 0;
	printf("%d\n", argc);
	while (i < argc)
	{
		ft_push(&stac, atoi(argv[i + 1]));
		i++;
	}
	i = 0;
	while (i < argc)
	{
		printf("array[%d] = %d\n", i, stac.array[i]);
		i++;
	}
	//sa(&stac);
	i = 0;
	while (i < argc)
	{
		printf("%d\n", ft_pop(&stac));
		i++;
	}
	return (0);
}
