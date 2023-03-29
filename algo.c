/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:10:36 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/29 02:30:32 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_index(t_stack **stack_a, int data)
{
	int j = 0;

	t_stack *tmp;
	tmp = *stack_a;
	while (tmp->data != data)
	{
		j++;
		tmp = tmp->next;
	}
	return j;
}

void push_element_to_top_(t_stack **stack_a, int data, int flag)
{
	if (get_index(stack_a, data) < (ft_lstsize(*stack_a) / 2) + 1)
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


void algo(t_stack **stack_a, t_stack **stack_b, int size_of_chunk)
{
	t_stack *tmp;
	int chunk;
	int chunk_size;
	int j;
	int i = 0;
	chunk = ft_lstsize(*stack_a) / size_of_chunk;//100 /5 = 20
	chunk_size = chunk;
	int max = 0;
	j = 0;
	tmp = *stack_a;
	while (*stack_a)
	{
		tmp = *stack_a;
		while (tmp)
		{
			if ((tmp)->index < chunk)
			{
				push_element_to_top_(stack_a, (tmp)->data, 0);
				pb(stack_a, stack_b);
				if(tmp->index < chunk -(chunk_size / 2))
					rb(stack_b,1);
				i++;
			}
			if (i == chunk - 1)
				break;
			(tmp) = (tmp)->next;
		}
		chunk += chunk_size;
	}
	j = 0;
	max = ft_lstsize(*stack_b);
	while(*stack_b)
	{
		if (get_index(stack_b, find_max(stack_b)) < (max / 2 - 1)
		&& get_index(stack_b,get_before_max(stack_b)) <  (max / 2 - 1)
		&& get_index(stack_b,get_before_max(stack_b)) < get_index(stack_b, find_max(stack_b)))
		{
			push_element_to_top_(stack_b, get_before_max(stack_b), 1337);
			pa(stack_a,stack_b);
			push_element_to_top_(stack_b, find_max(stack_b), 1337);
			pa(stack_a,stack_b);
			sa(*stack_a,1);
		}
		else if (get_index(stack_b, find_max(stack_b)) > (max / 2 - 1)
		&& get_index(stack_b,get_before_max(stack_b)) >  (max / 2 - 1)
		&& get_index(stack_b,get_before_max(stack_b)) > get_index(stack_b, find_max(stack_b)))
		{
			push_element_to_top_(stack_b, get_before_max(stack_b), 1337);
			pa(stack_a,stack_b);
			push_element_to_top_(stack_b, find_max(stack_b), 1337);
			pa(stack_a,stack_b);
			sa(*stack_a,1);
		}
		else
		{
			push_element_to_top_(stack_b, find_max(stack_b), 1337);
			pa(stack_a,stack_b);
		}
	}
}