/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:00:06 by szawi             #+#    #+#             */
/*   Updated: 2021/11/09 11:00:06 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

stacks_t	*ft_init(char *av, int ac)
{
	stacks_t	*st;
	int			i;
	int			nbr;
	int			max;

	st = (stacks_t*)malloc(sizeof(stacks_t));
	st->sta = NULL;
	st->stb = NULL;
	i = -1;
	max = 0;
	while (++i < ac)
	{
		nbr = ft_atoi(av[i]);
		ft_add_to_stack(&st->sta, nbr);
		// to refactor bellow
		if (ft_abs(nbr) > max)
			max = nbr;
	}
	st->max = max;
	return (st);
}

int main(int ac, char *av[])
{
	stacks_t	*st;

	st = ft_init(&av[1], ac - 1);
	ft_clear_stacks(st);
	return (0);
}
