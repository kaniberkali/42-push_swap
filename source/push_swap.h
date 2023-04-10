/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:30:52 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/10 16:27:07 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "structs.h"
#include "../library/libft/libft.h"
#include "../library/ft_printf/ft_printf.h"

int		parameter_controller(char **numbers);
void	set_stack(t_stack *stack, char **data);
void	sa(t_stack *stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);
void	pb(t_stack *stack);
void	pa(t_stack *stack);

#endif