/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:02:14 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/10 16:44:26 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parameter_controller(char **numbers)
{
	int	q;
	int	i;

	i = 0;
	while (numbers[i])
	{
		q = 0;
		if (numbers[i][q] == '-')
			q++;
		while (numbers[i][q] != '\0')
		{
			if (!(numbers[i][q] >= '0' && numbers[i][q] <= '9'))
				return (0);
			q++;
		}
		i++;
	}
	return (1);
}

void set_stack(t_stack *stack, char **data)
{
	int	i;

	i = 0;
	while (data[i])
		i++;
	stack->list_a = (t_list *)malloc(sizeof(t_list) * (i + 1));
	stack->list_b = (t_list *)malloc(sizeof(t_list) * (i + 1));
	stack->size_a = i;
	i = 0;
	while (data[i])
	{
		stack->list_a[i].value = ft_atoi(data[i]);
		if (data[i + 1])
		{
			stack->list_a[i].next = &stack->list_a[i + 1];
			stack->list_b[i].next = &stack->list_b[i + 1];
		}
		else
		{
			stack->list_a[i].next = NULL;
			stack->list_b[i].next = NULL;	
		}
		i++;
		free(data[i]);
	}
	free(data);
}
