/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:07:53 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/03 00:41:49 by ichinoseyuu      ###   ########.fr       */
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
		if (*head != NULL)
		{
			tmp = ft_lstlast(*head);
			tmp->next = new;
			new->prev = tmp;
		}
		else
			*head = new;
	}
}

void	ft_lstadd_front(t_node **list_b, t_node **list_a)
{
	t_node	*temp;

	temp = (*list_a);
	if (*list_a)
	{
		(*list_a) = (*list_a)->next;
		temp->next = (*list_b);
		if ((*list_b) != NULL)
		{
			(*list_b)->prev = temp;
			(*list_b) = temp;
		}
		else
		{
			(*list_b) = temp;
			(*list_b)->prev = NULL;
		}
	}
}
