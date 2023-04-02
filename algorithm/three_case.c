/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:08:36 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/02 15:38:21 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	help(t_stack **stack_a)
{
	rra(stack_a, 1);
	sa(*stack_a, 1);
}

void	two_case(t_stack **stack_a)
{
	if ((*stack_a)->data > (*stack_a)->next->data)
		sa(*stack_a, 1);
}

void	three_case(t_stack **stack_a)
{
	if ((*stack_a)->data < (*stack_a)->next->data
		&& (*stack_a)->next->data > (*stack_a)->next->next->data
		&& (*stack_a)->next->next->data > (*stack_a)->data)
		help(stack_a);
	else if ((*stack_a)->data < (*stack_a)->next->data
		&& (*stack_a)->next->data > (*stack_a)->next->next->data
		&& (*stack_a)->next->next->data < (*stack_a)->data)
		rra(stack_a, 1);
	else if ((*stack_a)->data > (*stack_a)->next->data
		&& (*stack_a)->next->data < (*stack_a)->next->next->data
		&& (*stack_a)->next->next->data > (*stack_a)->data)
		sa(*stack_a, 1);
	else if ((*stack_a)->data > (*stack_a)->next->data
		&& (*stack_a)->next->data < (*stack_a)->next->next->data
		&& (*stack_a)->next->next->data < (*stack_a)->data)
		ra(stack_a, 1);
	else if ((*stack_a)->data > (*stack_a)->next->data
		&& (*stack_a)->next->data > (*stack_a)->next->next->data
		&& (*stack_a)->next->next->data < (*stack_a)->data)
	{
		sa(*stack_a, 1);
		rra(stack_a, 1);
	}
}
