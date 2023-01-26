/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:34:18 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/01/24 15:53:24 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

typedef struct s_node {
	int *prev;
	int	num;
	int *next;
}t_node;

typedef struct s_stac {
	t_node	node[MAX_LENGTH];
}t_stac;

void	init(t_stac *stac)
{
	int	i;

	i = 0;
	while (i < MAX_LENGTH)
	{
		stac->node[i]->prev = NULL;
		stac->node[i]->num = 0;
		stac->node[i]->next = NULL
		i++;
	}
	stac->current = 0;
}

int	ft_push(t_stac *stac, int num)
{


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
	while (i < argc - 1)
	{
		ft_push(&stac, atoi(argv[i + 1]));
		printf("%d")
		i++;
	}
	printf("////////////\n");
	i = 0;
	while (i < argc - 1)
	{
		printf("array[%d] = %d\n", i, stac.array[i]);
		i++;
	}
	printf("////////////\n");
	//sa(&stac);
	i = 0;
	while (i < argc - 1)
	{
		printf("%d\n", ft_pop(&stac));
		i++;
	}
	return (0);
}
