/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:08:36 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/18 15:34:16 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_case(t_stack **stack_a)
{
	int i = 0;

	i = ft_lstsize(*stack_a);
	if (i == 3)
	{
		if((*stack_a)->data < (*stack_a)->next->data && (*stack_a)->next->data > (*stack_a)->next->next->data && (*stack_a)->next->next->data > (*stack_a)->data)
		{
			rra(stack_a,1);
			sa(*stack_a,1);
		}
		else if((*stack_a)->data < (*stack_a)->next->data && (*stack_a)->next->data > (*stack_a)->next->next->data && (*stack_a)->next->next->data < (*stack_a)->data )
			rra(stack_a,1);
		else if((*stack_a)->data > (*stack_a)->next->data && (*stack_a)->next->data < (*stack_a)->next->next->data && (*stack_a)->next->next->data > (*stack_a)->data )
			sa(*stack_a,1);
		else if((*stack_a)->data > (*stack_a)->next->data && (*stack_a)->next->data < (*stack_a)->next->next->data && (*stack_a)->next->next->data < (*stack_a)->data )
			ra(stack_a,1);
		else if((*stack_a)->data > (*stack_a)->next->data && (*stack_a)->next->data > (*stack_a)->next->next->data && (*stack_a)->next->next->data < (*stack_a)->data )
			{
				sa(*stack_a,1);
				rra(stack_a,1);
			}
		else
			return ;
	}
}