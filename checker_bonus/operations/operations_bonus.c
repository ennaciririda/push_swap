/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:48:13 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/02 17:39:20 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sa(t_stack *stack_a, int i)
{
	if (stack_a && stack_a->next)
	{
		swap(&stack_a->data, &stack_a->next->data);
		if (i == 1)
			write(1, "sa\n", 3);
	}
}

void	sb(t_stack *stack_b, int i)
{
	if (stack_b && stack_b->next)
	{
		swap(&stack_b->data, &stack_b->next->data);
		if (i == 1)
			write(1, "sb\n", 3);
	}
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a, 0);
	sa(stack_b, 0);
	write(1, "ss\n", 3);
}
