/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:18:31 by szawi             #+#    #+#             */
/*   Updated: 2021/11/09 11:18:31 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static size_t ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while(str && *str++)
		i++;
	return (i);
}

void	ft_print(const char *str, int fd)
{
	if (str && fd > -1)
		write(1, str, ft_strlen(str));
}
