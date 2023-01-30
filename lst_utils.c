/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:07:53 by yichinos          #+#    #+#             */
/*   Updated: 2023/01/30 17:35:40 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_lstadd_front(t_node **head, t_node *new)
{
	if (head)
	{
		if (*head)
		{
			new->next = *head;
			(*head)->prev = new;
			*head = new;
		}
	}
	else
		head = &new;
}
