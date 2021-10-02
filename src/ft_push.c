/* ************************************************************************** */
/**/
/*:::  ::::::::   */
/*   ft_push.c  :+:  :+::+:   */
/*+:+ +:+ +:+ */
/*   By: szawi <szawi@student.42.fr>+#+  +:+   +#+*/
/*+#+#+#+#+#+   +#+   */
/*   Created: 2021/09/09 22:31:28 by szawi #+##+# */
/*   Updated: 2021/09/09 22:40:27 by szawi###   ########.fr   */
/**/
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_push_a(t_all **st)
{
	t_stack	*temp;

	temp = (*st)->stack_b;
	if (temp)
	{
		(*st)->stack_b = temp->next;
		temp->next = (*st)->stack_a;
		(*st)->stack_a = temp;
		ft_print("pa\n", 1);
	}
}

void	ft_push_b(t_all **st)
{
	t_stack	*temp;

	temp = (*st)->stack_a;
	if (temp)
	{
		(*st)->stack_a = temp->next;
		temp->next = (*st)->stack_b;
		(*st)->stack_b = temp;
		ft_print("pb\n", 1);
	}
}
