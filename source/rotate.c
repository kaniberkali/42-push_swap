/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:30:57 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/03 16:49:06 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **list)
{
    if (*list == NULL || (*list)->next == NULL)
        return;

    t_list *first = *list;
    *list = (*list)->next;

    t_list *last = *list;
    while (last->next != NULL)
        last = last->next;

    last->next = first;
    first->next = NULL;
}

void	ra(t_list	**list_a)
{
	rotate(list_a);
}

void	rb(t_list	**list_b)
{
	rotate(list_b);
}

void	rr(t_list	**list_a, t_list **list_b)
{
	rotate(list_a);
	rotate(list_b);
}
