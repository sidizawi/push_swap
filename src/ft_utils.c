/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 21:02:16 by szawi             #+#    #+#             */
/*   Updated: 2021/09/10 21:03:08 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (s1[i] || s2[i])
		return (0);
	return (1);
}

void	ft_check_duplicates(char *av[], int ac)
{
	int	i;
	int	j;

	i = 0;
	if (!av || !av[0] || !ac)
		ft_free_exit(NULL);
	while (i < ac)
	{
		j = 0;
		while (j < i)
		{
			if (i != j && ft_strcmp(av[i], av[j]))
				ft_free_exit(NULL);
			j++;
		}
		i++;
	}
}

void	ft_free_exit(t_all **st)
{
	if (st && *st)
		ft_clear_all(st);
	ft_print("Error\n", 2);
	exit(1);
}

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s && *s++)
		i++;
	return (i);
}

void	ft_print(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
