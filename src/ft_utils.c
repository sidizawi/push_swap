/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:05:46 by szawi             #+#    #+#             */
/*   Updated: 2021/11/09 18:05:46 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_exit()
{
	ft_print("Error\n", 2);
	exit(1);
}

int		ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while(s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (s1[i] || s2[i])
		return (0);
	return (1);
}

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int		ft_atoi(char *s)
{
	long	res;
	int		n;

	res = 0;
	n = 1;
	if (!s)
		ft_exit();
	if (*s == '-')
		n = -1;
	if (*s == '-' || *s == '+')
		s++;
	while (*s >= '0' && *s <= '9' && res <= INT_MAX)
		res = res * 10 + *s++ - '0';
	res *= n;
	if (*s || (n < 0 && res < INT_MIN) || (n > 0 && res > INT_MAX))
		ft_exit();
	return (res);
}

int		ft_abs(int nbr)
{
	if (nbr < 0)
		return (nbr * -1);
	return (nbr);
}
