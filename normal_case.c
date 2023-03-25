/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normal_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:01:59 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/25 17:14:45 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void normal_case(t_stack **stack_a)
{
	t_stack *tmp;
	int count;
	tmp = *stack_a;
	count = 1;

	while(tmp && tmp->next)
	{
		if(tmp->data < tmp->next->data)
			count++;
		tmp = tmp->next;
	}
	if(count == ft_lstsize(*stack_a))
		exit(0);
}