/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extended_list_func.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:39:51 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/05 17:42:17 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source/push_swap.h"

t_list	*min(t_list *list)
{
	t_list	*min;

	min = list;
	list = list->next;
	while (list)
	{
		if (list->value < min->value)
			min = list;
		list = list->next;
	}
	return (min);
}

int	index_of(t_list *list, t_list *item)
{
	int	index;

	index = -1;
	while (list)
	{
		index++;
		if (list == item)
			return (index);
		list = list->next;
	}
	return (index);
}

int	is_sorted(t_stack stack)
{
	t_list	*list;
	int	value;

	list = *stack.list_a;
	if (!size(*stack.list_b) && size(list))
	{
		value = list->value;
		list = list->next;
		while (list)
		{
			if (value > list->value)
				return (0);
			value = list->value;
			list = list->next;
		}
		return (1);
	}
	return (0);
}


void	print(t_stack stack)
{
	t_list	*a_tmp;
	t_list	*b_tmp;

	a_tmp = *stack.list_a;
	b_tmp = *stack.list_b;
	while (a_tmp || b_tmp)
	{
		if (a_tmp != NULL)
			ft_printf("%d ", a_tmp->value);
		else
			ft_printf("  ");
		if (b_tmp != NULL)
			ft_printf("%d\n", b_tmp->value);
		else
			ft_printf(" \n");
		if (a_tmp != NULL)
			a_tmp = a_tmp->next;
		if (b_tmp != NULL)
			b_tmp = b_tmp->next;
	}
	ft_printf("_ _\na b\n");
}
