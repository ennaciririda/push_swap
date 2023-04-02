/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:55:17 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/02 15:37:49 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_min(t_stack **stack_a)
{
	t_stack	*tmp;
	int		i;

	tmp = *stack_a;
	i = tmp->data;
	while (tmp)
	{
		if (i > tmp->data)
			i = tmp->data;
		tmp = tmp->next;
	}
	return (i);
}
