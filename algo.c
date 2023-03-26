/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:10:36 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/25 23:38:24 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_index(t_stack **stack_a, int data)
{
	int j = 1;

	t_stack *tmp;
	tmp = *stack_a;
	while (tmp->data != data)
	{
		j++;
		tmp = tmp->next;
	}
	return j;
}

void push_element_to_top_(t_stack **stack_a, int data)
{

	if (get_index(stack_a, data) < (ft_lstsize(*stack_a) / 2) + 2)
	{
		while (get_index(stack_a, data) != 1)
			ra(stack_a, 1);
	}
	else
	{
		while (get_index(stack_a, data) != 1)
			rra(stack_a, 1);
	}
}

void algo(t_stack **stack_a, t_stack **stack_b, int size_of_chunk)
{
	t_stack *tmp;
	int chunk;
	int chunk_size;
	int j;
	int i = 0;
	chunk = ft_lstsize(*stack_a) / size_of_chunk;
	chunk_size = size_of_chunk;
	int max = 0;
	j = 0;
	tmp = *stack_a;
	while (j < chunk)
	{
		tmp = *stack_a;
		while (tmp)
		{
			if ((tmp)->index < size_of_chunk)
			{
				push_element_to_top_(stack_a, (tmp)->data);
				pb(stack_a, stack_b);
				i++;
			}
			if (i == size_of_chunk)
				break;
			(tmp) = (tmp)->next;
		}
		size_of_chunk += chunk_size;
		j++;
	}
	j = 0;
	max = ft_lstsize(*stack_b);
	while(j < max)
	{
		push_element_to_top_(stack_b, find_max(stack_b));
		pa(stack_a,stack_b);
		j++;
	}
}