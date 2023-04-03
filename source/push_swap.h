/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:30:52 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/03 12:01:11 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define LIST_A 'a'
# define LIST_B 'l'
# define STACK 'i'
# define UP 'k'
# define DOWN 'a'
#include "structs.h"
#include "../library/libft/libft.h"
#include "../library/ft_printf/ft_printf.h"

t_stack	get_stack(char *str);
int		check_stack_type(char *str);
void	swap(t_parameters parameters);
t_parameters router(t_parameters parameters);
void	rotate(t_parameters	parameters);

#endif