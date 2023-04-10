/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:30:47 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/10 16:43:14 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void test(t_stack stack)
{
	int	i;
	
	i = 0;
	ft_printf("----------------LIST A:%d--------------\n", stack.size_a);
	while (stack.size_a > i)
	{
		ft_printf("[%d] ",stack.list_a[i].value);
		if (stack.list_a[i].next != NULL)
			ft_printf("-> [%d]\n", stack.list_a[i].next->value);
		else
			ft_printf("-> NULL\n");
		i++;
	}
	ft_printf("--------------------------------------\n\n");
	ft_printf("----------------LIST B:%d--------------\n",stack.size_b);
	i = 0;
	while (stack.size_b > i)
	{
		ft_printf("[%d] ", stack.list_b[i].value);
		if (stack.list_b[i].next != NULL)
			ft_printf("-> [%d]\n",stack.list_b[i].next->value);
		else
			ft_printf("-> NULL\n");
		i++;
	}
	ft_printf("--------------------------------------\n");
}

int	main(int ac, char **av)
{
	t_stack	stack;
	char	*numbers;
	char	**data;
	int	i;

	i = 1;
	while (i < ac)
	{
		numbers = ft_strjoin(numbers, av[i]);
		numbers = ft_strjoin(numbers, " ");
		i++;
	}
	if (numbers)
	{
		data = ft_split(numbers, ' ');
		ft_memset(&stack, 0, sizeof(stack));
		if (parameter_controller(data))
			set_stack(&stack, data);
		free(numbers);
		test(stack);
		pb(&stack);
		pb(&stack);
		test(stack);
	}
	return (0);
}