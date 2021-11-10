/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:01:15 by szawi             #+#    #+#             */
/*   Updated: 2021/11/10 12:01:15 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_push(st_t **from, st_t **to, char *str)
{
	st_t	*temp;
	st_t	*curr;

	temp = *from;
	*from = (*from)->next;
	if (*from)
		(*from)->prev = NULL;
	temp->next = *to;
	curr = *to;
	if (curr)
		curr->prev = temp;
	*to = temp;
	ft_print(str, 1);
}

void		ft_push_a(stacks_t **st)
{
	ft_push(&(*st)->stb, &(*st)->sta, "pa\n");
	(*st)->acount++;
	(*st)->bcount--;
}

void		ft_push_b(stacks_t **st)
{
	ft_push(&(*st)->sta, &(*st)->stb, "pb\n");
	(*st)->acount--;
	(*st)->bcount++;
}
