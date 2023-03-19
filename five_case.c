/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:53:20 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/18 15:34:42 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void five_case(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);


	if(size == 5)
	{
		push_element_to_top(stack_a);
		pb(stack_a,stack_b);
		push_element_to_top(stack_a);
		pb(stack_a,stack_b);
		three_case(stack_a);
	// while(*stack_a)
	// {
	// 	printf("%d ",(*stack_a)->data);
	// 	(*stack_a) = (*stack_a)->next;
	// }
	pa(stack_a,stack_b);
	pa(stack_a,stack_b);
	}
}