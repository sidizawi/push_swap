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
	int		max;
	int		acount;
	int		bcount;
};

typedef struct stacks_s stacks_t;

# define INT_MAX 2147483647
# define INT_MIN -2147483648

//-------------------------------- check --------------------------------------
void		ft_check_duplicate(char *av[], int ac);
int			ft_issorted(st_t *st);
void		ft_check_digit(char *av[], int ac);

//-------------------------------- print --------------------------------------
size_t		ft_strlen(const char *str);
void		ft_print(const char *str, int fd);

//-------------------------------- push ---------------------------------------
void		ft_push_a(stacks_t **st);
void		ft_push_b(stacks_t **st);
void		ft_push_checker(stacks_t **st, int a, int b);

//------------------------------ reverse --------------------------------------
void		ft_reverse_rotate(stacks_t **st, int a, int b);
void		ft_reverse_checker(stacks_t **st, int a, int b);

//-------------------------------- rotate -------------------------------------
void		ft_rotate(stacks_t **st, int a, int b);
void		ft_rotate_checker(stacks_t **st, int a, int b);

//-------------------------------- sort ---------------------------------------
void		ft_sort(stacks_t **st, int div);

//-------------------------------- stack --------------------------------------
void		ft_add_to_stack(st_t **st, int nbr);
void		ft_clear_stacks(stacks_t **st);
stacks_t	*ft_init(char *av[], int ac);

//-------------------------------- swap ---------------------------------------
void		ft_swap(stacks_t **st, int a, int b);
void		ft_swap_checker(stacks_t **st, int a, int b);

//-------------------------------- utils --------------------------------------
void		ft_exit();
int			ft_strcmp(const char *s1, const char *s2);
int			ft_isdigit(int c);
int			ft_atoi(char *s);
int			ft_abs(int nbr);


#endif
