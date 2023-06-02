/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:14:49 by akaniber          #+#    #+#             */
/*   Updated: 2023/05/29 15:50:19 by akaniber         ###   ########.fr       */
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

void	remove(t_list *list, int index)
{
    t_list	*item;
	t_list	*tmp;

	item = get(list, index);
    tmp = item->next;
    item->next = tmp->next;
    free(tmp);
}

// void	unshift(t_list **list, t_list *item)
// {
// 	item->next = *list;
// 	*list = item;
// }

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

int	size(t_list *list)
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