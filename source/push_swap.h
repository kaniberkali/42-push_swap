/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:51:52 by akaniber          #+#    #+#             */
/*   Updated: 2023/05/29 16:37:28 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../library/ft_printf/ft_printf.h"
#include "../library/libft/libft.h"

typedef struct s_list {
    int value;
	int	index;
    struct s_list* next;
}	t_list;

typedef struct s_stack {
	t_list	**list_a;
	t_list	**list_b;
}	t_stack;

t_list	*create(int	value);
void	unshift(t_list **list, t_list *item);
t_list	*end(t_list	*list);
int		size(t_list *list);
t_list	*get(t_list	*list, int index);
void	push(t_list **list, t_list *item);
void	swap(t_list	*list_a, t_list *list_b, int index_a, int index_b);
void	sa(t_list *list_a);
void	sb(t_list *list_b);
void	ss(t_list *list_a, t_list *list_b);


#endif