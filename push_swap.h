/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:16:31 by yichinos          #+#    #+#             */
/*   Updated: 2023/02/03 16:14:37 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "ft_printf_42tokyo/ft_printf.h"
# include "libft/libft.h"

typedef struct s_node {
	struct s_node	*prev;
	int				num;
	struct s_node	*next;
}	t_node;

t_node	*ft_lstnew(int data);
t_node	*ft_lstlast(t_node *head);
void	ft_lstadd_back(t_node **head, t_node	*new);
void	ft_lstadd_front(t_node **list_b, t_node **list_a);
// oparations
void	ft_sa(t_node **list_a);
void	ft_swap(t_node **list_a);
void	ft_rotate(t_node **list_a);
void	ft_ra(t_node **list_a);
void	ft_rra(t_node **list_a);
void	ft_rev_rotate(t_node **list_a);
void	ft_pb(t_node **list_b, t_node **list_a);
void	ft_push_list(t_node **list_b, t_node **list_a);
void	ft_pa(t_node **list_a, t_node **list_b);
void	ft_rb(t_node **list_b);
void	ft_rrb(t_node **list_b);
void	ft_sb(t_node **list_b);
// main and init list
t_node	**ft_make_list(t_node **list_a);
t_node	**push_list(t_node **list_a, int ac, char **av);
// sort list
t_node	**ft_two_sort(t_node **list_a);
t_node	**ft_three_sort(t_node **list_a);
t_node	**ft_three_sort_next(t_node	**list_a, t_node *tmp);
//sort	5
void	ft_four_sort(t_node **list_a, t_node **list_b);


#endif
