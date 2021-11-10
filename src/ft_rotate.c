/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:19:41 by szawi             #+#    #+#             */
/*   Updated: 2021/11/10 11:19:41 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_rotate_stack(st_t **st, char *str)
{
	st_t	*curr;
	st_t	*temp;

	temp = *st;
	*st = (*st)->next;
	(*st)->prev = NULL;
	curr = *st;
	while (curr && curr->next)
		curr = curr->next;
	temp->prev = curr;
	temp->next = NULL;
	curr->next = temp;
	ft_print(str, 1);
}

void		ft_rotate(stacks_t **st, int a, int b)
{
	if (a && b)
	{
		ft_rotate_stack(&(*st)->sta, "rr");
		ft_rotate_stack(&(*st)->stb, "\n");
	}
	else if (a)
		ft_rotate_stack(&(*st)->sta, "ra\n");
	else
		ft_rotate_stack(&(*st)->stb, "rb\n");
}

void		ft_rotate_checker(stacks_t **st, int a, int b)
{
	if (a && b)
	{
		ft_rotate_stack(&(*st)->sta, "");
		ft_rotate_stack(&(*st)->stb, "");
	}
	else if (a)
		ft_rotate_stack(&(*st)->sta, "");
	else
		ft_rotate_stack(&(*st)->stb, "");
}
