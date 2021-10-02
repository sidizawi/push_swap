/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 21:30:58 by szawi             #+#    #+#             */
/*   Updated: 2021/09/10 22:09:15 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

// fsl: first - second - last

int	*ft_get_fsl(t_stack	*st)
{
	t_stack		*curr;
	static int	res[3];

	curr = st;
	res[0] = 0;
	res[1] = 0;
	res[2] = 0;
	if (curr)
	{
		res[0] = curr->val;
		if (curr->next)
		{
			res[1] = curr->next->val;
			while (curr && curr->next)
				curr = curr->next;
			res[2] = curr->val;
		}
		else
		{
			res[1] = curr->val;
			res[2] = curr->val;
		}
	}
	return (res);
}
