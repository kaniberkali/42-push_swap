/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:55:01 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/02 16:29:45 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_item	*router(t_parameters parameters)
{
	t_item	*list;

	list = NULL;
	if (parameters.process == STACK)
	{
		parameters.process = LIST_A;
		parameters.build(parameters);
		parameters.process = LIST_B;
		parameters.build(parameters);
	}
	else if (parameters.process == LIST_A)
		list = parameters.stack->list_a;
	else if (parameters.process == LIST_B)
		list = parameters.stack->list_b;
	return (list);
}

void	swap(t_parameters parameters)
{
	t_item	tmp;
	t_item	*list;

	parameters.build = router;
	list = router(parameters);
	if (list && list[0].next)
	{
		tmp = list[1];
		list[1].value = list[0].value;
		list[0].value = tmp.value;
	}
}

void	rotate(t_parameters	parameters)
{
	int		start;
	int		end;
	t_item	tmp;
	t_item	*list;

	parameters.build = router;
	list = router(parameters);
	if (list)
	{
		start = 0;
	}
}