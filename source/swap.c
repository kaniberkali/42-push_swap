/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:30:31 by akaniber          #+#    #+#             */
/*   Updated: 2023/05/29 16:37:12 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *list_a, t_list *list_b, int index_a, int index_b)
{
	t_list *a;
	t_list *b;
	t_list tmp;

	a = get(list_a, index_a);
	b = get(list_b, index_b);
	tmp	= *a;
	a->value = b->value;
	a->index = b->index;
	b->index = tmp.index;
	b->value = tmp.value;
	if (list_a != list_b)
	{
		a->next = b->next;
		b->next = tmp.next;
	}
}

void	sa(t_list *list_a)
{
	int	len;

	len = size(list_a);
	if (len >= 2)
		swap(list_a, list_a, 0, 1);
}

void	sb(t_list *list_b)
{
	int	len;

	len = size(list_b);
	if (len >= 2)
		swap(list_b, list_b, 0, 1);
}

void	ss(t_list *list_a, t_list *list_b)
{
	sa(list_a);
	sb(list_b);
}