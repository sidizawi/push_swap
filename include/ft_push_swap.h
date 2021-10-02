/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:13:25 by szawi             #+#    #+#             */
/*   Updated: 2021/09/10 16:12:11 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

struct s_stack
{
	int				val;
	struct s_stack	*next;
	struct s_stack	*prev;
};

typedef struct s_stack	t_stack;

struct s_all
{
	t_stack	*stack_a;
	t_stack	*stack_b;
};

typedef struct s_all	t_all;

void	ft_print(char *s, int fd);
int		ft_atoi(char *s, t_all **st);
void	ft_add_to_stack(t_stack **st, int nbr, t_all **stacks);
void	ft_clear_all(t_all **st);
void	ft_free_exit(t_all **st);
void	ft_check_duplicates(char *av[], int ac);
void	ft_swap(t_all **st, int a, int b);
int		ft_can_swap(t_stack *st);
void	ft_push_a(t_all **st);
void	ft_push_b(t_all **st);
void	ft_rotate(t_all **st, int a, int b);
void	ft_rev_rotate(t_all **st, int a, int b);
int		ft_is_sort(t_stack *st);

#endif
