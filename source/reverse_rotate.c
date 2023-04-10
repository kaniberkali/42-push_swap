/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 12:55:00 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/10 16:09:18 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	int	value;
	int	i;

	i = stack->size_a - 1;
	while (1 <= i)
	{
		value = stack->list_a[i].value;
		stack->list_a[i].value = stack->list_a[i - 1].value;
		stack->list_a[i - 1].value = value;
		i--;
	}
}

void	rrb(t_stack *stack)
{
	int	value;
	int	i;

	i = stack->size_b - 1;
	while (1 <= i)
	{
		value = stack->list_b[i].value;
		stack->list_b[i].value = stack->list_b[i - 1].value;
		stack->list_b[i - 1].value = value;
		i--;
	}
}

void	rrr(t_stack *stack)
{
	ra(stack);
	rb(stack);
}