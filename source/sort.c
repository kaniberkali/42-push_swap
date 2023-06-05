/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:25:00 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/05 16:53:08 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*min(t_list *list)
{
	t_list	*min;

	min = list;
	list = list->next;
	while (list)
	{
		if (list->value < min->value)
			min = list;
		list = list->next;
	}
	return (min);
}

int	index_of(t_list *list, t_list *item)
{
	int	index;

	index = -1;
	while (list)
	{
		index++;
		if (list == item)
			return (index);
		list = list->next;
	}
	return (index);
}

int	is_sorted(t_stack stack)
{
	t_list	*list;
	int	value;

	list = *stack.list_a;
	if (!size(*stack.list_b) && size(list))
	{
		value = list->value;
		list = list->next;
		while (list)
		{
			if (value > list->value)
				return (0);
			value = list->value;
			list = list->next;
		}
		return (1);
	}
	return (0);
}

void	sort(t_stack stack)
{
	int		len;

	len = size(*stack.list_a);
	if (is_sorted(stack))
		return;
	if (len <= 5)
		predict_sort(stack);
	else
		complex_sort(stack);
}
