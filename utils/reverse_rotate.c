/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:47:30 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/06 16:08:18 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source/push_swap.h"

void	reverse_rotate(t_list **list)
{
	t_list	*last;
	t_list	*second_last;

	last = *list;
	second_last = NULL;
	if (*list == NULL || (*list)->next == NULL)
		return ;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *list;
	*list = last;
}

void	rra(t_stack stack)
{
	reverse_rotate(stack.list_a);
	ft_printf("rra\n");
}

void	rrb(t_stack stack)
{
	reverse_rotate(stack.list_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack stack)
{
	reverse_rotate(stack.list_a);
	reverse_rotate(stack.list_b);
}
