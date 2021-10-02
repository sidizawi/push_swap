/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:10:22 by szawi             #+#    #+#             */
/*   Updated: 2021/09/10 17:36:31 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

// to be continued

static void	ft_swap_a(t_all **st)
{
	int		temp;
	t_stack	*curr;

	if (st && (*st))
	{
		curr = (*st)->stack_a;
		if (curr && curr->next)
		{
			temp = curr->val;
			curr->val = curr->next->val;
			curr->next->val = temp;
		}
	}
}

static void	ft_swap_b(t_all **st)
{
	int		temp;
	t_stack	*curr;

	if (st && (*st))
	{
		curr = (*st)->stack_b;
		if (curr && curr->next)
		{
			temp = curr->val;
			curr->val = curr->next->val;
			curr->next->val = temp;
		}
	}
}

void	ft_swap(t_all **st, int a, int b)
{
	if (a)
	{
		ft_swap_a(st);
		if (!b)
			ft_print("sa\n", 1);
	}
	if (b)
	{
		ft_swap_b(st);
		if (!a)
			ft_print("sa\n", 1);
	}
	if (a && b)
		ft_print("ss\n", 1);
}

int	ft_can_swap(t_stack *st)
{
	if (st && st->next)
	{
		if (st->val > st->next->val)
			return (1);
	}
	return (0);
}
