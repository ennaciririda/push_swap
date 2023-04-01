/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:29:00 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/01 15:07:21 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	tmp = *stack_b;
	if (*stack_b)
	{
		ft_lstadd_front(stack_a, ft_lstnew((*stack_b)->data));
		*stack_b = (*stack_b)->next;
		free(tmp);
		tmp = NULL;
		write(1, "pa\n", 3);
	}
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	tmp = *stack_a;
	if (*stack_a)
	{
		ft_lstadd_front(stack_b, ft_lstnew((*stack_a)->data));
		*stack_a = (*stack_a)->next;
		free(tmp);
		tmp = NULL;
		write(1, "pb\n", 3);
	}
}

void	ra(t_stack **stack_a, int i)
{
	t_stack	*tmp;

	if ((*stack_a) && (*stack_a)->next)
	{
		tmp = *stack_a;
		(*stack_a) = (*stack_a)->next;
		tmp->next = NULL;
		ft_lstadd_back(stack_a, tmp);
		if (i == 1)
			write(1, "ra\n", 3);
	}
}

void	rb(t_stack **stack_b, int i)
{
	t_stack	*tmp;

	if ((*stack_b) && (*stack_b)->next)
	{
		tmp = *stack_b;
		(*stack_b) = (*stack_b)->next;
		tmp->next = NULL;
		ft_lstadd_back(stack_b, tmp);
		if (i == 1)
			write(1, "rb\n", 3);
	}
}
