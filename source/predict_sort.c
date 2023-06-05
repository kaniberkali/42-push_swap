/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   predict_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:45:50 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/05 16:52:37 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three_chars(t_stack stack)
{
	t_list	*list;

	list = *stack.list_a;
	if (list->value > list->next->value && list->value > list->next->next->value
		&& list->next->value > list->next->next->value)
	{
		rra(stack);
		rra(stack);
		sa(stack);
	}
	else if (list->value > list->next->value && list->value > list->next->next->value)
		ra(stack);
	else if (list->value < list->next->value && list->value > list->next->next->value)
		rra(stack);
	else if (list->value > list->next->value && list->value < list->next->next->value)
		sa(stack);
	else if (list->value < list->next->value && list->value < list->next->next->value)
	{
		rra(stack);
		sa(stack);
	}
}

static void	sort_four_chars(t_stack stack)
{
	int	index;

	index = index_of(*stack.list_a, min(*stack.list_a));
	if ((index == 1 || index == 2) && !is_sorted(stack))
		ra(stack);
	if (index == 2 && !is_sorted(stack))
		ra(stack);
	if (index == 3 && !is_sorted(stack))
		rra(stack);
	if (is_sorted(stack))
		return;
	pb(stack);
	sort_three_chars(stack);
	pa(stack);
}

static void	sort_five_chars(t_stack stack)
{
	int	index;

	index = index_of(*stack.list_a, min(*stack.list_a));
	if ((index == 1 || index == 2) && !is_sorted(stack))
		ra(stack);
	if (index == 2 && !is_sorted(stack))
		ra(stack);
	if ((index == 3 || index == 4) && !is_sorted(stack))
		rra(stack);
	if (index == 4 && !is_sorted(stack))
		rra(stack);
	if (is_sorted(stack))
		return;
	pb(stack);
	sort_four_chars(stack);
	pa(stack);
}

void	predict_sort(t_stack stack)
{
	t_list	*list;
	int		len;

	len = size(*stack.list_a);
	if (is_sorted(stack))
		return;
	if (len == 2)
		ra(stack);
	else if (len == 3)
		sort_three_chars(stack);
	else if (len == 4)
		sort_four_chars(stack);
	else if (len == 5)
		sort_five_chars(stack);
}
