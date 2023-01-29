/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:30:10 by yichinos          #+#    #+#             */
/*   Updated: 2023/01/29 19:22:01 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include "libft/libft.h"
#include <stdlib.h>

typedef struct s_node {
	struct s_node	*prev;
	int				num;
	struct s_node	*next;
}	t_node;

t_node	*ft_lstnew(int data)
{
	t_node	*ndptr;

	ndptr = malloc(sizeof(t_node));
	if (!ndptr)
		return (NULL);
	ndptr->prev = NULL;
	ndptr->num = data;
	ndptr->next = NULL;
	return (ndptr);
}

t_node	*ft_lstlast(t_node *head)
{
	if (!head)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}

void	ft_lstadd_back(t_node **head, t_node	*new)
{
	t_node	*tmp;

	if (head)
	{
		if (*head)
		{
			tmp = ft_lstlast(*head);
			tmp->next = new;
			new->prev = tmp;
		}
		else
			*head = new;
	}
}

int	main(void)
{
	t_node	**head;
	t_node	*tmp;
	int		i;

	i = 0;
	while (i < 10)
	{
		t_node	*tmp;
		tmp = ft_lstnew(i);
		ft_lstadd_back(head, tmp);
		i++;
	}
	i = 0;
	while (i < 10)
	{
		printf("%p\t%p\t%p\n", (*head)->prev, *head, (*head)->next);
		if ((*head)->next != NULL)
			head = &(*head)->next;
		else
			break ;
		i++;
	}
	tmp = *head;
	printf ("%p\n", tmp);
	while ((*head)->prev != NULL)
		head = &(*head)->prev;
	printf ("%p\n", *head);
	(*head)->prev = tmp;
	tmp->next = (*head);
	printf("//////////////////////////////////////\n");
	i = 0;
	while (i < 10)
	{
		printf("%p\t%p\t%p\n", (*head)->prev, *head, (*head)->next);
		head = &(*head)->next;
		i++;
	}
	return (0);
}
