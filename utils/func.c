/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:35:09 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/10 17:04:29 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source/push_swap.h"

void	error(char *msg)
{
	ft_putendl_fd(msg, 1);
	exit(0);
}

void	free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
		free(str[i--]);
	free(str);
}

char	*formatter(int argc, char **argv)
{
	int		i;
	char	*numbers;

	i = 1;
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

void	set_index_all(t_stack stack)
{
	int		index;
	t_list	*item;

	index = 0;
	item = min_with_not_index(*stack.list_a);
	while (item)
	{
		item->index = index;
		index++;
		item = min_with_not_index(*stack.list_a);
	}
}

int	get_bits(int nbr)
{
	int	bits;

	bits = 0;
	while ((nbr) >> bits != 0)
		bits++;
	return (bits);
}
