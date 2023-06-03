/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:30:57 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/03 15:38:37 by akaniber         ###   ########.fr       */
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

void	pa(t_list **list_a, t_list **list_b)
{
    if (*list_b == NULL)
        return;
    
    t_list *item = *list_b;
    *list_b = item->next;
    
    item->next = *list_a;
    *list_a = item;
}

void	pb(t_list **list_a, t_list **list_b)
{
    if (*list_a == NULL)
        return;
    
    t_list *item = *list_a;
    *list_a = item->next;
    
    item->next = *list_b;
    *list_b = item;
}