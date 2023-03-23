/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:10:36 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/22 19:10:35 by rennacir         ###   ########.fr       */
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

void algo(t_stack **stack_a, t_stack **stack_b, int size_of_chunk)
{
	t_stack *tmp;
	int i = 0;
	// int j = 0;
	int num_of_chunks;
	int s;
	tmp = *stack_b;
	num_of_chunks = ft_lstsize(*stack_a) / size_of_chunk + 1;
	printf("%d\n", num_of_chunks);
	s = size_of_chunk;
	size_of_chunk += s;

	while (*stack_a)
	{
		while((*stack_a)->index > num_of_chunks && get_index(stack_a,(*stack_a)->data))
			ra(stack_a,1);
		pb(stack_a,stack_b);
	}

	tmp = *stack_b;

	while(i < ft_lstsize(*stack_b))
	{
		push_element_to_top(stack_b);
		pa(stack_a,stack_b);
		i++;
	}

}