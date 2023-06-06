/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:51:52 by akaniber          #+#    #+#             */
/*   Updated: 2023/06/06 16:55:16 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../library/ft_printf/ft_printf.h"
# include "../library/libft/libft.h"

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}	t_list;

typedef struct s_stack {
	t_list	**list_a;
	t_list	**list_b;
}	t_stack;

t_list	*create(int value);
void	unshift(t_list **list, t_list *item);
t_list	*end(t_list	*list);
size_t	size(t_list *list);
t_list	*get(t_list	*list, int index);
void	remove(t_list *list, int index);
void	unshift(t_list **list, t_list *item);
void	print(t_stack stack);
void	rotate(t_list **list);
void	push(t_list **list, t_list *item);
void	swap(t_list	*list_a, t_list *list_b, int index_a, int index_b);
void	sa(t_stack stack);
void	sb(t_stack stack);
void	ss(t_stack stack);
void	pa(t_stack stack);
void	pb(t_stack stack);
void	ra(t_stack stack);
void	rb(t_stack stack);
void	rr(t_stack stack);
void	rra(t_stack stack);
void	rrb(t_stack stack);
void	rrr(t_stack stack);
void	error(char *msg);
void	free_all(char **str);
void	controller(int argc, char **argv);
char	*formatter(int argc, char **argv);
int		is_sorted(t_stack stack);
void	sort(t_stack stack);
void	predict_sort(t_stack stack);
void	set_index_all(t_stack stack);
int		index_of(t_list *list, t_list *item);
t_list	*min(t_list *list);
t_list	*max(t_list *list);
t_list	*min_with_not_index(t_list *list);
void	complex_sort(t_stack stack);
int		get_bits(int nbr);
#endif