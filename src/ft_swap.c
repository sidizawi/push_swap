/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:57:35 by szawi             #+#    #+#             */
/*   Updated: 2021/11/10 10:57:35 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_swap_stack(st_t **st, char *str)
{
	int	temp;

	temp = (*st)->val;
	(*st)->val = (*st)->next->val;
	(*st)->next->val = temp;
	ft_print(str, 1);
}

void		ft_swap(stacks_t **st, int a, int b)
{
	if (a && b)
	{
		ft_swap_stack(&(*st)->sta, "ss");
		ft_swap_stack(&(*st)->stb, "\n");
	}
	else if (a)
		ft_swap_stack(&(*st)->sta, "sa\n");
	else
		ft_swap_stack(&(*st)->stb, "sb\n");
}
