/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:12:49 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/04 18:51:41 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*formatter(int argc, char **argv)
{
	int		i;
	char	*numbers;

	i  = 1;
	numbers = NULL;
	while (argv[i] && argc > i)
	{
		numbers = ft_strjoin(numbers, argv[i]);
		if (argc - 1 > i)
			numbers = ft_strjoin(numbers, " ");
		i++;
	}
	return (numbers);
}

t_stack	init(char *str)
{
	int		i;
	char	**numbers;
	t_stack	stack;

	stack.list_a = (t_list **)malloc(sizeof(t_list *));
	stack.list_b = (t_list **)malloc(sizeof(t_list *));
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

	//controller(argc, argv);
	str = formatter(argc, argv);
	stack = init(str);
	free(str);
	print(stack);
	while(1) {}
    return 0;
}
