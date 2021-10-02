/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szawi <szawi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:13:06 by szawi             #+#    #+#             */
/*   Updated: 2021/09/10 17:25:36 by szawi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static t_all	*ft_init_stacks(char *av[], int ac)
{
	t_all	*stacks;
	int		temp;
	int		i;

	stacks = NULL;
	stacks = (t_all *)malloc(sizeof(t_all));
	if (!stacks)
		ft_free_exit(NULL);
	stacks->stack_a = NULL;
	stacks->stack_b = NULL;
	i = 0;
	while (i < ac)
	{
		temp = ft_atoi(av[i], &stacks);
		ft_add_to_stack(&stacks->stack_a, temp, &stacks);
		i++;
	}
	return (stacks);
}

void	ft_print_stack(t_all *st)
{
	t_stack	*curr;

	if (st->stack_a)
	{
		ft_print("stack a\n", 1);
		curr = st->stack_a;
		while (curr)
		{
			printf("%i\n", curr->val);
			curr = curr->next;
		}
	}
	if (st->stack_b)
	{
		ft_print("stack b\n", 1);
		curr = st->stack_b;
		while (curr)
		{
			printf("%i\n", curr->val);
			curr = curr->next;
		}
	}
}

		// if (!ft_is_sort(st->stack_a))
		// 	ft_sort(&st);

int	main(int ac, char *av[])
{
	t_all	*st;

	if (ac > 1)
	{
		ft_check_duplicates(&av[1], ac - 1);
		st = ft_init_stacks(&av[1], ac - 1);
		printf("print:\n");
		ft_print_stack(st);
		ft_print("\n", 1);
		ft_swap(&st, 1, 0);
		printf("\nprint:\n");
		ft_print_stack(st);
		ft_rotate(&st, 1, 0);
		printf("\nprint:\n");
		ft_print_stack(st);
		ft_clear_all(&st);
	}
	else
		ft_free_exit(NULL);
	return (0);
}
