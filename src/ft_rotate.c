/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 23:18:47 by szawi             #+#    #+#             */
/*   Updated: 2021/09/10 17:36:31 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_rotate_a(t_all **st)
{
	t_stack	*temp;
	t_stack	*curr;

	curr = (*st)->stack_a;
	if (curr && curr->next)
	{
		temp = curr;
		while (curr && curr->next)
			curr = curr->next;
		(*st)->stack_a = temp->next;
		temp->next = NULL;
		temp->prev = curr;
		curr->next = temp;
	}
}

static void	ft_rotate_b(t_all **st)
{
	t_stack	*temp;
	t_stack	*curr;

	curr = (*st)->stack_b;
	if (curr && curr->next)
	{
		temp = curr;
		while (curr && curr->next)
			curr = curr->next;
		(*st)->stack_b = temp->next;
		temp->next = NULL;
		temp->prev = curr;
		curr->next = temp;
	}
}

void	ft_rotate(t_all **st, int a, int b)
{
	if (a)
	{
		ft_rotate_a(st);
		if (!b)
			ft_print("ra\n", 1);
	}
	if (b)
	{
		ft_rotate_b(st);
		if (!a)
			ft_print("rb\n", 1);
	}
	if (a && b)
		ft_print("rr\n", 1);
}
