/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:05:39 by szawi             #+#    #+#             */
/*   Updated: 2021/11/09 20:05:39 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static st_t	*ft_new_stack(int nbr, st_t *prev)
{
	st_t	*new;

	new = (st_t*)malloc(sizeof(st_t));
	if (!new)
		ft_exit();
	new->val = nbr;
	new->next = NULL;
	new->prev = prev;
	return (new);
}

void		ft_add_to_stack(st_t **st, int nbr)
{
	st_t	*curr;

	if (!st)
		ft_exit();
	curr = *st;
	if (!curr)
		*st = ft_new_stack(nbr, NULL);
	else
	{
		while (curr && curr->next)
			curr = curr->next;
		curr->next = ft_new_stack(nbr, curr);
	}
}
