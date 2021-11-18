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

void	ft_print_stacks(stacks_t *st)
{
	st_t	*sta;
	st_t	*stb;

	sta = st->sta;
	stb = st->stb;

	printf("stack a size = %d\n", st->acount);
	printf("stack b size = %d\n", st->bcount);

	printf("a\t\tb\n");
	while (sta || stb)
	{
		if (sta && stb)
		{
			printf("%d\t\t%d\n", sta->val, stb->val);
			sta = sta->next;
			stb = stb->next;
		}
		else if (sta)
		{
			printf("%d\n", sta->val);
			sta = sta->next;
		}
		else
		{
			printf("  \t\t%d\n", stb->val);
			stb = stb->next;
		}
	}
}

int		main(int ac, char *av[])
{
	stacks_t	*st;
	int			div;

	if (ac == 1)
		ft_exit();
	ft_check_duplicate(&av[1], ac - 1);
	ft_check_digit(&av[1], ac - 1);
	st = ft_init(&av[1], ac - 1);
	ft_print_stacks(st);
	if (!ft_issorted(st->sta))
	{
		div = 1;
		while (st->max / div)
		{
			ft_sort(&st, div);
			div *= 10;
		}
	}
	ft_print_stacks(st);
	ft_clear_stacks(&st);
	return (0);
}
