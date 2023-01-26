/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:30:10 by yichinos          #+#    #+#             */
/*   Updated: 2023/01/26 17:41:26 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_node {
	struct s_node	*prev;
	size_t			num;
	struct s_node	*next;
}	t_node;

typedef struct s_list {
	struct s_node	*top;
	struct s_node	*bottom;
}	t_list;

struct s_node	*initnode(int data)
{
	t_node	*tmp;

	tmp = NULL;
	tmp = (t_node *)malloc(sizeof(t_node));
	if (tmp == NULL)
		return (NULL);
	tmp->num = data;
	tmp->prev = NULL;
	tmp->next = NULL;
	return (tmp);
}

t_list	*initlist(int data)
{
	t_list	*a;

	a = NULL;
	a = (t_list *)malloc(sizeof(t_list));
	if (a == NULL)
		return (NULL);
	a->top = initnode(data);
	if (a->top == NULL)
	{
		free(a);
		return (NULL);
	}
	return (a);
}

int main(int ac, char **av)
{
	int		i;
	t_list	*a;
	t_node	*tmp;
	t_node  *tmp2;

	a = initlist(atoi(av[1]));
	printf("list    a\n/////////////////////////\n");
	printf("\t%zu\n", a->top->num);
	printf("--------------------------\n");
	tmp = initnode(atoi(av[2]));
	a->top->next = tmp;
	tmp->prev = a->top;
	printf("\t%zu\n\t%zu\n", a->top->num, a->top->next->num);
	printf("---------------------------\n");
	tmp2 = initnode(atoi(av[3]));
	tmp->next = tmp2;
	tmp2->prev = tmp;
	printf("\t%zu\n\t%zu\n\t%zu\n", a->top->num, a->top->next->num, tmp->next->num);

	printf("//////////////////////////\n");
	return (0);
}
