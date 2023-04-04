/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:02:14 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/04 13:12:18 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_stack_type(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (!((str[i] >= '0' && str[i] <= '9') || str[i] == ' '))
			return (0);
		i++;
	}
	return (1);
}

t_stack	get_stack(char *str)
{
	int		i;
	char	**list;
	t_stack	stack;

	ft_memset(&stack, 0, sizeof(stack));
	list = ft_split(str, ' ');
	while (list[stack.size_a])
		stack.size_a++;
	stack.list_a = (t_item *)malloc(sizeof(t_item) * (stack.size_a + 1));
	stack.list_b = (t_item *)malloc(sizeof(t_item) * (stack.size_a + 1));
	i = 0;
	while (i < stack.size_a)
	{
		stack.list_a[i].index = i;
		stack.list_a[i].value = ft_atoi(list[i]);
		if (i < stack.size_a - 1)
			stack.list_a[i].next = &stack.list_a[i + 1];
		else
			stack.list_a[i].next = &stack.list_a[0];
		if (i == 0)
			stack.list_a[i].prev = &stack.list_a[stack.size_a - 1];
		else
			stack.list_a[i].prev = &stack.list_a[i - 1];
		free(list[i]);
		i++;
	}
	stack.size_a = stack.size_a;
	free(list);
	return (stack);
}