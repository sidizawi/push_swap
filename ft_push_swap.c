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

stacks_t	*ft_init(char *av[], int ac)
{
	stacks_t	*st;
	int			i;
	int			nbr;
	int			max;

	st = (stacks_t*)malloc(sizeof(stacks_t));
	st->sta = NULL;
	st->stb = NULL;
	st->acount = ac;
	st->bcount = 0;
	i = -1;
	max = 0;
	while (++i < ac)
	{
		nbr = ft_atoi(av[i]);
		ft_add_to_stack(&st->sta, nbr);
		if (ft_abs(nbr) > max)
			max = ft_abs(nbr);
	}
	st->max = max;
	return (st);
}

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

int			main(int ac, char *av[])
{
	stacks_t	*st;

	if (ac == 1)
		ft_exit();
	ft_check_duplicate(&av[1], ac - 1);
	ft_check_digit(&av[1], ac - 1);
	st = ft_init(&av[1], ac - 1);
	printf("max = %d\n", st->max);
	ft_print_stacks(st);
	ft_reverse_rotate(&st, 1, 0);
	ft_print_stacks(st);
	ft_swap(&st, 1, 0);
	ft_print_stacks(st);
	// if (!ft_issorted(st->sta))
	// 	ft_sort(&st);
	printf("is sorted = %d\n", ft_issorted(st->sta));
	ft_clear_stacks(&st);
	return (0);
}
