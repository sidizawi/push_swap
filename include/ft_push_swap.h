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

struct st_s
{
	int			val;
	struct st_s	*next;
	struct st_s	*prev;
};

typedef struct st_s st_t;

struct stacks_s
{
	st_t	*sta;
	st_t	*stb;
};

typedef struct stacks_s stacks_t;

# define INT_MAX 2147483647
# define INT_MIN -2147483648

void	ft_print(const char *str, int fd);
void	ft_check_duplicate(char *av[], int ac);
void	ft_exit();
size_t	ft_strlen(const char *str);
void	ft_check_digit(char *av[], int ac);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_isdigit(int c);
int		ft_atoi(char *s);

#endif
