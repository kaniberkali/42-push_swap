/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 12:55:06 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/10 16:10:18 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int	value;

	if (stack->size_a >= 2)
	{
		value = stack->list_a[0].value;
		stack->list_a[0].value = stack->list_a[1].value;
		stack->list_a[1].value = value;
	}
}

void	sb(t_stack *stack)
{
	int	value;

	if (stack->size_b >= 2)
	{
		value = stack->list_b[0].value;
		stack->list_b[0].value = stack->list_b[1].value;
		stack->list_b[1].value = value;
	}
}

void	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
}
