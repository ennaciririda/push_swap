/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_before_max.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 00:54:18 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/29 17:19:07 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_before_max(t_stack **stack_b)
{
	t_stack	*tmp;
	int		i;

	tmp = *stack_b;
	i = tmp->data;
	while (tmp)
	{
		if (i < tmp->data && tmp->data != find_max(stack_b))
			i = tmp->data;
		tmp = tmp->next;
	}
	return (i);
}
