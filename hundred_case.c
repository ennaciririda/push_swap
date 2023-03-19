/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_case.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:10:36 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/19 23:54:07 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "push_swap.h"

 int get_index(t_stack **stack_a, int data)
{
	int j = 1;

	t_stack *tmp;
	tmp = *stack_a;
	while(tmp->data != data)
	{
		j++;
		tmp = tmp->next;
	}
	return j;
}

void hundred_case(t_stack **stack_a)
{
	t_stack *tmp;

	tmp = *stack_a;
	int i = 0;
	while(tmp)
	{
		if(tmp->index < 20)
		{
			i = get_index(stack_a, tmp->data);
			printf(" index before : %d \n ",i);
			ra(stack_a,1);
			i = get_index(stack_a,tmp->data);
			printf(" index after : %d \n ",i);
		}
		tmp = tmp->next;
	}
}