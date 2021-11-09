/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:00:49 by szawi             #+#    #+#             */
/*   Updated: 2021/11/09 11:00:49 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdio.h>

# include <stdlib.h>
# include <unistd.h>

struct stack_s
{
	int				val;
	struct s_stack	*next;
	struct s_stack	*prev;
};

typedef struct stack_s stack_t;

struct all_s
{
	stack_t	*sa;
	stack_t	*sb;
};

typedef struct all_s all_st;

void	ft_print(const char *str, int fd);

#endif
