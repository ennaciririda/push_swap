/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:04:58 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/18 15:33:05 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_index(t_stack **stack_a)
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