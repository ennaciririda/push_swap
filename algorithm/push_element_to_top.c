/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element_to_top.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:50:32 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/02 15:38:18 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_element_to_top(t_stack **stack_a)
{
	if (get_index_of_min(stack_a) < (ft_lstsize(*stack_a) / 2) + 2)
	{
		while (get_index_of_min(stack_a) != 0)
			ra(stack_a, 1);
	}
	else
	{
		while (get_index_of_min(stack_a) != 0)
			rra(stack_a, 1);
	}
}
