/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:02:14 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/01 16:54:45 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	get_stack(char *str)
{
	int		i;
	char	**list;
	t_stack	stack;

	ft_memset(&stack, 0, sizeof(stack));
	list = ft_split(str, ' ');
	while (list[stack.size_a])
		stack.size_a++;
	stack.list_a = (t_item *)malloc(sizeof(t_item) * stack.size_a + 1);
	stack.list_b = (t_item *)malloc(sizeof(t_item) * stack.size_a + 1);
	i = 0;
	while (i < stack.size_a)
	{
		stack.list_a[i].index = i;
		stack.list_a[i].value = ft_atoi(list[i]);
		if (i < stack.size_a + 1)
			stack.list_a[i].next = NULL;
		else
			stack.list_a[i].next = &stack.list_a[i + 1];
		if (i == 0)
			stack.list_a[i].previous = NULL;
		else
			stack.list_a[i].previous = &stack.list_a[i - 1];
		i++;
	}
	stack.size_a = stack.size_a;
	return (stack);
}