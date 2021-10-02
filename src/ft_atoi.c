/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:59:10 by szawi             #+#    #+#             */
/*   Updated: 2021/09/10 17:36:31 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_atoi(char *s, t_all **st)
{
	long	res;
	int		n;

	if (!s)
		ft_free_exit(st);
	res = 0;
	n = 1;
	if (*s == '-')
		n = -1;
	if (*s == '+' || *s == '-')
		s++;
	while (*s && *s >= '0' && *s <= '9' && res < INT_MAX)
		res = res * 10 + (*s++ - 48);
	res *= n;
	if (*s || (res < 0 && res < INT_MIN) || (res > 0 && res > INT_MAX))
		ft_free_exit(st);
	return ((int)res);
}
