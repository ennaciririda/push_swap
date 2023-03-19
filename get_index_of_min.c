/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index_of_min.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:04:58 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/19 23:20:42 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_index_of_min(t_stack **stack_a)
{
	int j = 1;
	int i = find_min(stack_a);
	t_stack *tmp;
	tmp = *stack_a;
	while(tmp->data != i)
	{
		j++;
		tmp = tmp->next;
	}
	return j;
}