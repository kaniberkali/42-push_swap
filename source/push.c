/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:30:57 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/04 15:09:14 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **list, t_list *item)
{
	t_list	*last;

	if (*list)
	{
		last = end(*list);
		last->next = item;
		item->next = NULL;
	}
	else
	{
		*list = item;
		(*list)->next = NULL;
	}
}

void	pa(t_stack stack)
{
	t_list	*item;

    if (*stack.list_b == NULL)
        return;
    
    item = *stack.list_b;
    *stack.list_b = item->next;
    
    item->next = *stack.list_a;
    *stack.list_a = item;
	ft_printf("pa\n");
}

void	pb(t_stack stack)
{
	t_list	*item;

    if (*stack.list_a == NULL)
        return;
    
    item = *stack.list_a;
    *stack.list_a = item->next;
    
    item->next = *stack.list_b;
    *stack.list_b = item;
	ft_printf("pb\n");
}