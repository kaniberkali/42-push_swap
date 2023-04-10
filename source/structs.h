/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:03:31 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/10 16:21:39 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_list
{
	int		value;
	struct s_list *next;
}	t_list;

typedef struct s_stack
{
	t_list	*list_a;
	t_list	*list_b;
	int		size_a;
	int		size_b;
}	t_stack;

#endif