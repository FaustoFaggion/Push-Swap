/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagiusep <fagiusep@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:25:09 by fausto            #+#    #+#             */
/*   Updated: 2021/12/28 17:05:22 by fagiusep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>

# define DEBUG 0
# define CUT_POINT 30
# define INT_MIN 		-2147483648
# define INT_MAX 		2147483647

typedef struct s_stack
{
	int		pos;
	int		cut_point;
	int		content;
	void	*previous;
	void	*next;
}			t_stack;

typedef struct s_game
{
	int		*args;
	int		size;
	int		cut_point;
	int		minor;
	int		major;
	int		index;
	t_stack	*stack_a;
	t_stack	*top_a;
	t_stack	*next_a;
	t_stack	*botton_a;
	int		size_a;
	t_stack	*stack_b;
	t_stack	*top_b;
	t_stack	*next_b;
	t_stack	*botton_b;
	int		size_b;
}		t_game;

int		init_ps(int argc, char *argv[], t_game *game);

int		init_stack(t_game *game, int argc);

t_stack	*ps_lstlast(t_stack *stack);

int		exit_ps(t_game *game);

int		cmd_sa(t_game *game, int i);

int		cmd_ra(t_game *game, int i);

int		cmd_rra(t_game *game, int i);

int		cmd_pb(t_game *game);

int		cmd_sb(t_game *game, int i);

int		cmd_rb(t_game *game, int i);

int		cmd_rrb(t_game *game, int i);

int		cmd_pa(t_game *game);

int		cmd_ss(t_game *game);

int		cmd_rr(t_game *game);

int		cmd_rrr(t_game *game);

int		solution_psG(t_game *t_game);

void	debug(t_game *game);

void	print_stack(t_game *game);

long long	ps_atoll(const char *ptr);

//void	check_top_pos(t_game *game);

#endif
