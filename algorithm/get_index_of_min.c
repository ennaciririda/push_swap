/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index_of_min.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:04:58 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/02 15:38:00 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_index_of_min(t_stack **stack_a)
{
	t_stack	*tmp;
	int		i;
	int		j;

	i = find_min(stack_a);
	j = 0;
	tmp = *stack_a;
	while (tmp->data != i)
	{
		j++;
		tmp = tmp->next;
	}
	return (j);
}
