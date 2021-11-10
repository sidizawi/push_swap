/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:55:57 by szawi             #+#    #+#             */
/*   Updated: 2021/11/10 15:55:57 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_response(stacks_t **st)
{
	char	buff[6];

	while (1)
	{
		read(0, buff, 5);
	}
}

int		main(int ac, char *av[])
{
	stacks_t	*st;

	if (ac == 1)
		return (0);
	ft_check_duplicate(&av[1], ac - 1);
	ft_check_digit(&av[1], ac - 1);
	st = ft_init(&av[1], ac - 1);
	ft_response(&st);
	if (st->bcount == 0 && ft_issorted(st->sta))
		ft_print("OK\n", 1);
	else
		ft_print("KO\n", 1);
	ft_clear_stacks(&st);
	return (0);
}
