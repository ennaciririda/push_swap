/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:07:47 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/01 23:58:40 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_stack **stack_a)
{
	t_stack	*tmp;
	int		count;

	tmp = *stack_a;
	count = 1;
	while (tmp && tmp->next)
	{
		if (tmp->data < tmp->next->data)
			count++;
		tmp = tmp->next;
	}
	if (count == ft_lstsize(*stack_a))
		return 0;
	return 1;
}

void	checker(t_stack **stack_a, t_stack **stack_b)
{
	char *line;

	line = get_next_line(0);
	while(line)
	{
		if (ft_strncmp(line,"sa\n",3) == 0)
			sa(*stack_a,0);
		else if (ft_strncmp(line,"ra\n",3) == 0)
			ra(stack_a,0);
		else if (ft_strncmp(line,"rb\n",3) == 0)
			rb(stack_a,0);
		else if (ft_strncmp(line,"pa\n",3) == 0)
			pa(stack_a,stack_b);
		else if (ft_strncmp(line,"pb\n",3) == 0)
			pb(stack_a,stack_b);
		else if (ft_strncmp(line,"rrb\n",4) == 0)
			rrb(stack_b,0);
		else
		{
			printf("erro\n");
			exit(1);
		}
		free(line);
		line = get_next_line(0);
	}
	if (is_sorted(stack_a) == 0)
		write(1,"OK\n",3);
	else
		write(1,"KO\n",3);
}
