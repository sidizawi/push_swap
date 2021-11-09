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

int main(int ac, char *av[])
{
	ft_print("Hi there\n", 1);
	printf("av[1] = %d\n", ft_atoi(av[1]));
	ft_check_duplicate(&av[1], ac - 1);
	ft_print("ok duplicate\n", 1);
	ft_check_digit(&av[1], ac - 1);
	ft_print("ok digit\n", 1);
}
