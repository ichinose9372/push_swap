/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:07:53 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/16 16:18:48 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

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

int	ft_lstsize(t_node *list_a)
{
	int	count;

	count = 0;
	while (list_a != NULL)
	{
		list_a = list_a->next;
		count++;
	}
	return (count);
}
