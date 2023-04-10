/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 12:55:00 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/10 16:09:27 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack)
{
	int	value;
	int	i;

	i = 0;
	while (stack->size_a - 1 > i)
	{
		value = stack->list_a[i].value;
		stack->list_a[i].value = stack->list_a[i + 1].value;
		stack->list_a[i + 1].value = value;
		i++;
	}
}

void	rb(t_stack *stack)
{
	int	value;
	int	i;

	i = 0;
	while (stack->size_b - 1 > i)
	{
		value = stack->list_b[i].value;
		stack->list_b[i].value = stack->list_b[i + 1].value;
		stack->list_b[i + 1].value = value;
		i++;
	}
}

void	rr(t_stack *stack)
{
	ra(stack);
	rb(stack);
}