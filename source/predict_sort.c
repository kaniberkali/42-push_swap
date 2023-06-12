/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   predict_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:45:50 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/10 17:14:00 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three_chars(t_stack stack)
{
	int		value;
	int		next_value;
	int		next_next_value;

	value = (*stack.list_a)->value;
	next_value = (*stack.list_a)->next->value;
	next_next_value = (*stack.list_a)->next->next->value;
	if (value > next_value && value > next_next_value
		&& next_value > next_next_value)
	{
		rra(stack);
		rra(stack);
		sa(stack);
	}
	else if (value > next_value && value > next_next_value)
		ra(stack);
	else if (value < next_value && value > next_next_value)
		rra(stack);
	else if (value > next_value && value < next_next_value)
		sa(stack);
	else if (value < next_value && value < next_next_value)
	{
		rra(stack);
		sa(stack);
	}
}

static void	sort_four_chars(t_stack stack)
{
	int	index;

	index = index_of(*stack.list_a, min(*stack.list_a));
	if ((index == 1 || index == 2))
		ra(stack);
	if (index == 2)
		ra(stack);
	if (index == 3)
		rra(stack);
	if (is_sorted(stack))
		return ;
	pb(stack);
	sort_three_chars(stack);
	pa(stack);
}

static void	sort_five_chars(t_stack stack)
{
	int	index;

	index = index_of(*stack.list_a, min(*stack.list_a));
	if ((index == 1 || index == 2))
		ra(stack);
	if (index == 2)
		ra(stack);
	if (index == 3)
		rra(stack);
	if ((index == 3 || index == 4))
		rra(stack);
	if (is_sorted(stack))
		return ;
	pb(stack);
	sort_four_chars(stack);
	pa(stack);
}

void	predict_sort(t_stack stack)
{
	int		len;

	len = size(*stack.list_a);
	if (is_sorted(stack))
		return ;
	if (len == 2)
		ra(stack);
	else if (len == 3)
		sort_three_chars(stack);
	else if (len == 4)
		sort_four_chars(stack);
	else if (len == 5)
		sort_five_chars(stack);
}
