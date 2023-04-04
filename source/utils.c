/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:55:01 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/04 14:52:55 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_parameters	router(t_parameters parameters)
{
	if (parameters.process == STACK)
	{
		parameters.process = LIST_A;
		parameters.build(parameters);
		parameters.process = LIST_B;
		parameters.build(parameters);
	}
	else if (parameters.process == LIST_A)
	{
		parameters.list = parameters.stack->list_a;
		parameters.size = &parameters.stack->size_a;
	}
	else if (parameters.process == LIST_B)
	{
		parameters.list = parameters.stack->list_b;
		parameters.size = &parameters.stack->size_b;
	}
	return (parameters);
}

void	swap(t_parameters parameters)
{
	t_item	tmp;

	parameters.build = swap;
	parameters = router(parameters);
	if (parameters.list && parameters.list[0].next)
	{
		tmp = parameters.list[1];
		parameters.list[1].value = parameters.list[0].value;
		parameters.list[0].value = tmp.value;
	}
}

void	delete(t_parameters parameters)
{
	if (parameters.delete != -1)
	{
		parameters.list[0].prev = &parameters.list[*parameters.size - 2];
		parameters.list[*parameters.size - 2].next = &parameters.list[0];
		parameters.list[*parameters.size - 1] = parameters.list[*parameters.size];
		*parameters.size = (*parameters.size - 1);
	}
}

void rotate(t_parameters parameters)
{
    int     i;

    parameters.build = rotate;
    parameters = router(parameters);
    i = 0;
    if (parameters.direction == DOWN)
        i = *parameters.size - 2;
	if (parameters.delete != -1)
		i = parameters.delete;
    while (*parameters.size - 2 >= i && i >= 0)
    {
		if (parameters.delete == -1)
			ft_swap(&parameters.list[i].prev->value, &parameters.list[i].value);
		else
		{
			parameters.list[i].value = parameters.list[i + 1].value;
			parameters.list[i].index = parameters.list[i + 1].index;
		}
        if (parameters.direction == UP || parameters.delete != -1)
            i++;
        else
            i--;
    }
	delete(parameters);
}

void	push(t_parameters parameters)
{
    parameters.build = rotate;
    parameters = router(parameters);

	if (parameters.list == parameters.stack->list_a)
	{
		
	}
}