/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:55:01 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/03 17:25:05 by akaniber         ###   ########.fr       */
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
		parameters.size = parameters.stack->size_a;
	}
	else if (parameters.process == LIST_B)
	{
		parameters.list = parameters.stack->list_b;
		parameters.size = parameters.stack->size_b;
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

void rotate(t_parameters parameters)
{
    t_item  tmp;
    int     i;

    parameters.build = rotate;
    parameters = router(parameters);
    i = 0;
    if (parameters.direction == DOWN)
        i = parameters.size - 2;
    while (parameters.size - 2 >= i && i >= 0)
    {
        tmp.value = parameters.list[i].prev->value;
        parameters.list[i].prev->value = parameters.list[i].value;
        parameters.list[i].value = tmp.value;
        if (parameters.direction == UP)
            i++;
        else
            i--;
    }
	//parameters.list[parameters.delete].prev->next = parameters.list[parameters.delete].next;
	//parameters.list[parameters.delete].next->prev = parameters.list[parameters.delete].prev;
	//ft_memset(&parameters.list[parameters.delete], 0, sizeof(parameters.list[parameters.delete]));
	//parameters.list[parameters.delete].next = NULL;
	//parameters.list[parameters.delete].prev = NULL;
	//parameters.list[parameters.delete] = parameters.list[parameters.size + 2];
}
