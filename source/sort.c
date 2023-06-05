/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:25:00 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/05 17:40:17 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack stack)
{
	int		len;

	len = size(*stack.list_a);
	if (is_sorted(stack))
		return;
	if (len <= 5)
		predict_sort(stack);
	else
		complex_sort(stack);
}
