/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 20:44:06 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/02 15:38:09 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	opera(t_stack **stack_a, t_stack **stack_b)
{
	push_element_to_top_(stack_b, get_before_max(stack_b), 1337);
	pa(stack_a, stack_b);
	push_element_to_top_(stack_b, find_max(stack_b), 1337);
	pa(stack_a, stack_b);
	sa(*stack_a, 1);
}

void	push_b(t_stack **stack_a, t_stack **stack_b, int chunk, int chunk_size)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	while (*stack_a)
	{
		tmp = *stack_a;
		while (tmp)
		{
			if ((tmp)->index < chunk)
			{
				while (get_index(stack_a, tmp->data) != 0)
					ra(stack_a, 1);
				pb(stack_a, stack_b);
				if (tmp->index < chunk -(chunk_size / 2))
					rb(stack_b, 1);
				i++;
			}
			if (i == chunk - 1)
				break ;
			(tmp) = (tmp)->next;
		}
		chunk += chunk_size;
	}
}

void	push_back(t_stack **stack_a, t_stack **stack_b)
{
	int	max;
	int	get_i;

	max = ft_lstsize(*stack_b);
	while (*stack_b)
	{
		get_i = get_index(stack_b, find_max(stack_b));
		if (get_i < (max / 2 - 1)
			&& get_index(stack_b, get_before_max(stack_b)) < (max / 2 - 1)
			&& get_index(stack_b, get_before_max(stack_b)) < get_i)
			opera(stack_a, stack_b);
		else if (get_i > (max / 2 - 1)
			&& get_index(stack_b, get_before_max(stack_b)) > (max / 2 - 1)
			&& get_index(stack_b, get_before_max(stack_b)) > get_i)
			opera(stack_a, stack_b);
		else
		{
			push_element_to_top_(stack_b, find_max(stack_b), 1337);
			pa(stack_a, stack_b);
		}
	}
}
