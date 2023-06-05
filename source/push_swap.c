/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:12:49 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/05 15:01:46 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	init(char *str)
{
	int		i;
	char	**numbers;
	t_stack	stack;

	stack.list_a = (t_list **)malloc(sizeof(t_list *));
	stack.list_b = (t_list **)malloc(sizeof(t_list *));
	*stack.list_a = NULL;
	*stack.list_b = NULL;
	numbers = ft_split(str, ' ');
	i = 0;
	while (numbers[i])
	{
		push(stack.list_a, create(ft_atoi(numbers[i])));
		i++;
	}
	free_all(numbers);
	return (stack);
}

int main(int argc, char **argv) {
	t_stack	stack;
	char	*str;

	if (argc >= 2)
	{
		controller(argc, argv);
		str = formatter(argc, argv);
		stack = init(str);
		free(str);
		print(stack);
		sort(stack);
		print(stack);
	}
	else
		error("Error");
    return (0);
}
