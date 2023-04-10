/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 12:55:04 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/10 16:43:28 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack)
{
	t_list	*item;

	if (stack->size_b >= 1)
	{
		item = &stack->list_a[0];
		stack->list_a[0].value = stack->list_b[0].value;
		stack->list_a[0].next = item;
		stack->size_a++;
		stack->size_b--;
	}
}

void	pb(t_stack *stack)
{
	t_list	item;

	if (stack->size_a >= 1)
	{
		item = stack->list_b[0];
		stack->list_b[0].value = stack->list_a[0].value;
		stack->list_b[0].next = &item;
		stack->size_b++;
		stack->size_a--;
		ra(stack);
		stack->list_a[stack->size_a - 1] = stack->list_a[stack->size_a];
	}
}
