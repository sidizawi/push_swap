/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 23:41:40 by szawi             #+#    #+#             */
/*   Updated: 2021/09/10 17:36:31 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

// look to (*st)->stack_a = temp !!! maybe leaks

static void	ft_rev_rotate_a(t_all **st)
{
	t_stack	*last;
	t_stack	*temp;

	last = (*st)->stack_a;
	if (last && last->next)
	{
		while (last && last->next && last->next->next)
			last = last->next;
		temp = last->next;
		last->next = NULL;
		temp->prev = NULL;
		temp->next = (*st)->stack_a;
		(*st)->stack_a = temp;
	}
}

static void	ft_rev_rotate_b(t_all **st)
{
	t_stack	*last;
	t_stack	*temp;

	last = (*st)->stack_b;
	if (last && last->next)
	{
		while (last && last->next && last->next->next)
			last = last->next;
		temp = last->next;
		last->next = NULL;
		temp->prev = NULL;
		temp->next = (*st)->stack_b;
		(*st)->stack_b = temp;
	}
}

void	ft_rev_rotate(t_all **st, int a, int b)
{
	if (a)
	{
		ft_rev_rotate_a(st);
		if (!b)
			ft_print("rra\n", 1);
	}
	if (b)
	{
		ft_rev_rotate_b(st);
		if (!a)
			ft_print("rrb\n", 1);
	}
	if (a && b)
		ft_print("rrr\n", 1);
}
