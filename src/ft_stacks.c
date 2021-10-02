/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:29:05 by szawi             #+#    #+#             */
/*   Updated: 2021/09/11 16:10:33 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static t_stack	*ft_new_stack(int nbr, t_all **st)
{
	t_stack	*new_stack;

	new_stack = (t_stack *)malloc(sizeof(t_stack));
	if (!new_stack)
		ft_free_exit(st);
	new_stack->val = nbr;
	new_stack->next = NULL;
	new_stack->prev = NULL;
	return (new_stack);
}

void	ft_add_to_stack(t_stack **st, int nbr, t_all **stacks)
{
	t_stack	*curr;

	if (!st)
		ft_free_exit(stacks);
	else
	{
		curr = (*st);
		if (!curr)
			*st = ft_new_stack(nbr, stacks);
		else
		{
			while (curr && curr->next)
				curr = curr->next;
			curr->next = ft_new_stack(nbr, stacks);
			curr->next->prev = curr;
		}
	}
}

static void	ft_clear(t_stack **st)
{
	while (st && (*st))
	{
		if ((*st)->next)
		{
			(*st) = (*st)->next;
			free((*st)->prev);
			(*st)->prev = NULL;
		}
		else
		{
			free((*st));
			(*st) = NULL;
		}
	}
}

void	ft_clear_all(t_all **st)
{
	if (st && (*st)->stack_a)
		ft_clear(&(*st)->stack_a);
	else if (st && (*st)->stack_b)
		ft_clear(&(*st)->stack_b);
	if (st && (*st)->stack_b)
		ft_clear_all(st);
	free(*st);
	*st = NULL;
}
