/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing_elements.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:32:04 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/22 13:11:09 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_stack **stack_a)
{
	t_stack *tmp;
	int i;
	tmp = *stack_a;
	i = tmp->data;
	while(tmp)
	{
		if(i < tmp->data)
			i = tmp->data;
		tmp = tmp->next;
	}
	return i;
}

int	find_min_with_cond(t_stack **stack_a)
{
	t_stack *tmp;
	int i;
	tmp = *stack_a;
	i = find_max(stack_a) + 1;
	while(tmp)
	{
		if(i > tmp->data && tmp->index == -1)
			i = tmp->data;
		tmp = tmp->next;
	}
	return i;
}

void	indexing_elements(t_stack **stack_a)
{
	int index;
	t_stack *tmp;
	t_stack *tmp1;
	index = 0;
	tmp = *stack_a;
	while (tmp)
	{
		tmp->index = -1;
		tmp = tmp->next;
	}
	tmp = *stack_a;
	tmp1 = *stack_a;
	while(tmp)
	{
		tmp1 = *stack_a;
		while (tmp1)
		{
			if(tmp1->data == find_min_with_cond(stack_a))
			{

				tmp1->index = index;
				index++;
			}
			tmp1 = tmp1->next;
		}
		tmp = tmp->next;
	}

}