/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element_to_top.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:50:32 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/19 23:21:27 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_element_to_top(t_stack **stack_a)
{
	int i = 0;
	if(get_index_of_min(stack_a) < (ft_lstsize(*stack_a) / 2) + 2)
	{
		i = get_index_of_min(stack_a);
		while( i != 1)
		{
			ra(stack_a,1);
			i = get_index_of_min(stack_a);
		}
	}
	else
	{
		while(get_index_of_min(stack_a) != 1)
			rra(stack_a,1);
	}
}