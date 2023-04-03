/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:30:47 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/03 14:50:31 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack;
	char	*numbers;
	int	i;

	i = 1;
	while (i < ac)
	{
		numbers = ft_strjoin(numbers, av[i]);
		numbers = ft_strjoin(numbers, " ");
		i++;
	}
	if (check_stack_type(numbers))
	{
		stack = get_stack(numbers);
		i =0;
		while (i < stack.size_a)
		{
			if (stack.list_a[i].previous != NULL)
				ft_printf("previous: [%d, %d] ", stack.list_a[i].previous->index, stack.list_a[i].previous->value);
			ft_printf("current: [%d, %d] ", stack.list_a[i].index, stack.list_a[i].value);
			if (stack.list_a[i].next != NULL)
				ft_printf("next: [%d, %d]", stack.list_a[i].next->index, stack.list_a[i].next->value);
			ft_printf("\n");
			i++;
		}
		t_parameters parameters;
		ft_memset(&parameters, 0, sizeof(parameters));
		parameters.stack = &stack;
		parameters.process = LIST_A;
		parameters.direction = UP;
		parameters.delete = 1;
		rotate(parameters);
		rotate(parameters);
		parameters.direction = UP;
		i = 0;
		ft_printf("------------------------------------------------------------\n");
		while (i < stack.size_a)
		{
			if (stack.list_a[i].previous != NULL)
				ft_printf("previous: [%d, %d] ", stack.list_a[i].previous->index, stack.list_a[i].previous->value);
			ft_printf("current: [%d, %d] ", stack.list_a[i].index, stack.list_a[i].value);
			if (stack.list_a[i].next != NULL)
				ft_printf("next: [%d, %d]", stack.list_a[i].next->index, stack.list_a[i].next->value);
			ft_printf("\n");
			i++;
		}
	}
	free(numbers);
	return (0);
}