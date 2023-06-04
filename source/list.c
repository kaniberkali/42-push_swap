/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:14:49 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/04 15:27:05 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create(int	value)
{
	t_list	*item;

	item = (t_list *)malloc(sizeof(t_list) + 1);
	item->value = value;
	item->next = NULL;
	item->index = -1;
	return (item);
}

t_list	*end(t_list	*list)
{
	t_list	*tmp;

	tmp = list;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			break;
	}
	return (tmp);
}

size_t	size(t_list *list)
{
	size_t	i;
	t_list	*tmp;

	tmp = list;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

t_list	*get(t_list	*list, int index)
{
	t_list	*tmp;

	tmp = list;
	while (tmp->next && index > 0)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			break;
		index--;
	}
	return (tmp);
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