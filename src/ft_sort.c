/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:40:13 by szawi             #+#    #+#             */
/*   Updated: 2021/09/11 23:04:45 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

// fsl : first - second - last

static void	ft_check_complete(t_all **st, int *fsl_a, int *fsl_b)
{
	
}

int	ft_is_sort(t_stack *st)
{
	t_stack	*curr;

	curr = st;
	while (curr && curr->next)
	{
		if (curr->val > curr->next->val)
			return (0);
		curr = curr->next;
	}
	return (1);
}

// fsl : first - second - last

void	ft_sort(t_all **st)
{
	int	*fsl_a;
	int	*fsl_b;

	if (ft_is_sort((*st)->stack_a) && (*st)->stack_b == NULL)
		return ;
	fsl_a = ft_get_fsl((*st)->stack_a);
	fsl_b = ft_get_fsl((*st)->stack_b);
	ft_check_complete(st, fsl_a, fsl_b);
	ft_sort(st);
}
