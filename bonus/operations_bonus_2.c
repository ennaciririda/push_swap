/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_bonus_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:29:27 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/01 13:59:35 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	write(1, "rr\n", 3);
}

void	rra(t_stack **stack_a, int i)
{
	t_stack	*tmp;
	t_stack	*tmp1;
	int		j;

	j = 0;
	if (*stack_a && (*stack_a)->next)
	{
		tmp1 = *stack_a;
		tmp = ft_lstlast(*stack_a);
		ft_lstadd_front(stack_a, ft_lstnew(tmp->data));
		free(tmp);
		tmp = NULL;
		while (tmp1->next->next)
		{
			tmp1 = tmp1->next;
			j++;
		}
		tmp1->next = NULL;
		if (i == 1)
			write(1, "rra\n", 4);
	}
}

void	rrb(t_stack **stack_b, int i)
{
	t_stack	*tmp;
	t_stack	*tmp1;
	int		j;

	j = 0;
	if (*stack_b)
	{
		tmp1 = *stack_b;
		tmp = ft_lstlast(*stack_b);
		ft_lstadd_front(stack_b, ft_lstnew(tmp->data));
		free(tmp);
		tmp = NULL;
		while (tmp1->next->next)
		{
			tmp1 = tmp1->next;
			j++;
		}
		tmp1->next = NULL;
		if (i == 1)
			write(1, "rrb\n", 4);
	}
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	write(1, "rrr\n", 4);
}
