/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:03:31 by akaniber          #+#    #+#             */
/*   Updated: 2023/04/04 13:35:53 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_item
{
	int				index;
	int				value;
	struct s_item	*next;
	struct s_item	*prev;
}	t_item;

typedef struct s_stack
{
	t_item	*list_a;
	t_item	*list_b;
	int		size_a;
	int		size_b;
}	t_stack;

typedef struct s_parameters
{
	void			(*build)(struct s_parameters parameters);
	t_item			*list;
	t_stack			*stack;
	int				process;
	int				direction;
	int				delete;
	int				*size;
}	t_parameters;

#endif