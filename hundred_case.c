/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_case.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:10:36 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/20 21:05:17 by rennacir         ###   ########.fr       */
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

void hundred_case(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *tmp;
	int i = 0;
	tmp = *stack_a;
	int num_of_chunks;

	num_of_chunks = ft_lstsize(*stack_a);
	indexing_elements(&tmp);

		i = i + 3;
		tmp = *stack_a;
		while (tmp)
		{
			if (tmp->index < 3)
			{
				// while (get_index(stack_a, tmp->data) != 1)
				// 	ra(stack_a, 1);
				pb(stack_a, stack_b);
				// break;
			}
			else
			{
				while (get_index(stack_a, tmp->data) != 1)
					ra(stack_a, 1);
			}
			tmp = tmp->next;
		}

}