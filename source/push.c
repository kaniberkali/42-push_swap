/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:30:57 by akaniber          #+#    #+#             */
/*   Updated: 2023/05/29 16:41:48 by akaniber         ###   ########.fr       */
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

void	pa(t_list *list_a, t_list *list_b)
{
	swap(list_a, list_b, 0, 1);
	//remove(list_b, 0);
}

void	pb(t_list *list_a, t_list *list_b)
{
	swap(list_a, list_b, 0, 1);
	//remove(list_a, 0);
}