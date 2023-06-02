/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:12:49 by akaniber          #+#    #+#             */
/*   Updated: 2023/05/29 16:37:47 by akaniber         ###   ########.fr       */
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
	t_list	**list;
	t_list	*item;
	t_list	*item2;

	list = (t_list **)malloc(sizeof(t_list *) + 1);
	item = create(15);
	item2 = create(25);
	push(list, item);
	push(list, item2);
	test(*list);
	sa(*list);
	test(*list);
	//ft_printf("%d", item3->value);
	//swap(*list, *list, 0, 1);
	//test(*list);
    return 0;
}
