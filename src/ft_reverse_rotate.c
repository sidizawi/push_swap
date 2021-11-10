/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:35:12 by szawi             #+#    #+#             */
/*   Updated: 2021/11/10 11:35:12 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_reverse_stack(st_t **st, char *str)
{
	st_t	*curr;
	st_t	*temp;

	curr = *st;
	while (curr && curr->next)
		curr = curr->next;
	temp = curr;
	curr = curr->prev;
	curr->next = NULL;
	temp->prev = NULL;
	temp->next = *st;
	*st = temp;
	temp->next->prev = temp;
	ft_print(str, 1);
}

void		ft_reverse_rotate(stacks_t **st, int a, int b)
{
	if (a && b)
	{
		ft_reverse_stack(&(*st)->sta, "rrr");
		ft_reverse_stack(&(*st)->stb, "\n");
	}
	else if (a)
		ft_reverse_stack(&(*st)->sta, "rra\n");
	else
		ft_reverse_stack(&(*st)->stb, "rrb\n");
}
