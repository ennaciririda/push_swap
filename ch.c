/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ch.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:33:45 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/30 23:05:43 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ch(t_stack **stack_a, int chunk)
{
	int i = 0;
	int from_top;
	int from_bottom;
	int	tab_index[ft_lstsize(*stack_a)];
	t_stack *tmp;
	from_top = 0;
	from_bottom = ft_lstsize(*stack_a) - 1;
	tmp = *stack_a;
	while (tmp)
	{
		tab_index[i] = tmp->index;
		i++;
		tmp = tmp->next;
	}

	while(from_top <= ft_lstsize(*stack_a) / 2)
	{
		if(tab_index[from_top] <= chunk)
			break;
		from_top++;
	}
	// printf("bottom %d\n",from_bottom);
	while (from_bottom)
	{
		// printf("tab index %d\n", tab_index[from_bottom]);
		// printf("chunk %d\n", chunk);
		if(tab_index[from_bottom] <= chunk)
			break;
		from_bottom--;
	}
	printf("top : %d\n", from_top);
	printf("botoom : %d\n", from_bottom);
	printf("stck size :  %d\n",ft_lstsize(*stack_a));
	// exit(0);
	i = 0;
	if(from_top <= ft_lstsize(*stack_a) - from_bottom)
	{
		while (i < from_top)
		{
			ra(stack_a,1);
			i++;
		}
	}
	else
	{
		while (i < ft_lstsize(*stack_a) - from_bottom)
		{
			rra(stack_a,1);
			i++;
		}
	}
}