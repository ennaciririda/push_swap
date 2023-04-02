/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:10:36 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/02 15:37:37 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_index(t_stack **stack_a, int data)
{
	int		j;
	t_stack	*tmp;

	j = 0;
	tmp = *stack_a;
	while (tmp->data != data)
	{
		j++;
		tmp = tmp->next;
	}
	return (j);
}

void	push_element_to_top_(t_stack **stack_a, int data, int flag)
{
	if (get_index(stack_a, data) < (ft_lstsize(*stack_a) / 2) - 1)
	{
		while (get_index(stack_a, data) != 0)
		{
			if (flag == 0)
				ra(stack_a, 1);
			else
				rb(stack_a, 1);
		}
	}
	else
	{
		while (get_index(stack_a, data) != 0)
		{
			if (flag == 0)
				rra(stack_a, 1);
			else
				rrb(stack_a, 1);
		}
	}
}

void	algo(t_stack **stack_a, t_stack **stack_b, int num_of_chunks)
{
	int	chunk;
	int	chunk_size;

	chunk = ft_lstsize(*stack_a) / num_of_chunks;
	chunk_size = chunk;
	push_b(stack_a, stack_b, chunk, chunk_size);
	push_back(stack_a, stack_b);
}
