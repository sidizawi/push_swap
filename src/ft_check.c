/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:26:35 by szawi             #+#    #+#             */
/*   Updated: 2021/11/09 11:26:35 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void		ft_exit()
{
	ft_print("Error\n", 2);
	exit(1);
}

static int	ft_strcmp(const char *s1, const char *s2)
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

void		ft_check_duplicate(char *av[], int ac)
{
	int i;
	int j;

	if (!av || !av[0] || !ac)
		ft_exit();
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (j < i)
		{
			if (ft_strcmp(av[i], av[j]))
				ft_exit();
			j++;
		}
		i++;
	}
}

static int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

void		ft_check_digit(char *av[], int ac)
{
	int		i;
	size_t	j;
	size_t	size;

	i = -1;
	if (!av || !av[0] || !ac)
		ft_exit();
	while (++i < ac)
	{
		size = ft_strlen(av[i]);
		j = -1;
		while (++j < size)
		{
			if (!ft_isdigit(av[i][j]))
				ft_exit();
		}
	}
}
