/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:12:49 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/03 16:57:15 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test(t_list	*list)
{
	t_list	*tmp;

	tmp = list;
	ft_printf("----------------------------\n");
	while (tmp)
	{
		ft_printf("%d -> %d\n", tmp->index, tmp->value);
		tmp = tmp->next;
	}
}

int main() {
	t_stack	stack;
	t_list	*item;
	t_list	*item2;
	t_list	*item3;
	t_list	*item4;

	stack.list_a = (t_list **)malloc(sizeof(t_list *) + 1);
	stack.list_b = (t_list **)malloc(sizeof(t_list *) + 1);
	item = create(15);
	item2 = create(25);
	item3 = create(35);	
	item4 = create(45);
	push(stack.list_a, item);
	push(stack.list_a, item2);
	push(stack.list_a, item3);
	push(stack.list_a, item4);
	test(*stack.list_a);
	rra(stack.list_a);
	test(*stack.list_a);
	//ft_printf("%d", item3->value);
	//swap(*list, *list, 0, 1);
	//test(*list);
    return 0;
}
