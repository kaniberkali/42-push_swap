/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:47:30 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/03 16:49:17 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverse_rotate(t_list **list)
{
    if (*list == NULL || (*list)->next == NULL)
        return;

    t_list *last = *list;
    t_list *second_last = NULL;

    while (last->next != NULL) {
        second_last = last;
        last = last->next;
    }

    second_last->next = NULL;
    last->next = *list;
    *list = last;
}

void	rra(t_list	**list_a)
{
	reverse_rotate(list_a);
}

void	rrb(t_list	**list_b)
{
	reverse_rotate(list_b);
}

void	rrr(t_list	**list_a, t_list **list_b)
{
	reverse_rotate(list_a);
	reverse_rotate(list_b);
}
