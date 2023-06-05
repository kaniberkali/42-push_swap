/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:30:57 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/05 14:21:27 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source/push_swap.h"

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

void	ra(t_stack stack)
{
	rotate(stack.list_a);
	ft_printf("ra\n");
}

void	rb(t_stack stack)
{
	rotate(stack.list_b);
	ft_printf("rb\n");
}

void	rr(t_stack stack)
{
	rotate(stack.list_a);
	rotate(stack.list_b);
}
