/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:30:47 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/01 16:52:11 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack;
	char	*numbers;
	int	i;

	i = 1;
	numbers = (char *)malloc(sizeof(char) * 1);
	numbers[0] = '\0';
	while (i < ac)
	{
		numbers = ft_strjoin(numbers, av[i]);
		numbers = ft_strjoin(numbers, " ");
		i++;
	}
	
	stack = get_stack(numbers);
	i =0;
	while (i < stack.size_a)
	{
		ft_printf("%d, %d\n", stack.list_a[i].index, stack.list_a[i].value);
		i++;
	}
}