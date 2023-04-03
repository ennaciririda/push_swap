/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:07:47 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/03 01:55:24 by rennacir         ###   ########.fr       */
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
		return (0);
	return (1);
}

void	op_1(t_stack **stack_a, t_stack **stack_b, char *line)
{
	if (ft_strncmp(line, "sa\n") == 0)
		sa(*stack_a, 0);
	else if (ft_strncmp(line, "sb\n") == 0)
		sb(*stack_b, 0);
	else if (ft_strncmp(line, "ra\n") == 0)
		ra(stack_a, 0);
	else if (ft_strncmp(line, "rb\n") == 0)
		rb(stack_b, 0);
}

void	op_2(t_stack **stack_a, t_stack **stack_b, char *line)
{
	if (ft_strncmp(line, "pa\n") == 0)
		pa(stack_a, stack_b);
	else if (ft_strncmp(line, "pb\n") == 0)
		pb(stack_a, stack_b);
	else if (ft_strncmp(line, "rra\n") == 0)
		rra(stack_a, 0);
	else if (ft_strncmp(line, "rrb\n") == 0)
		rrb(stack_b, 0);
	else
	{
		write(2, "Error\n", 6);
		free(line);
		exit(1);
	}
}

void	op_3(t_stack **stack_a, t_stack **stack_b, char *line)
{
	if (ft_strncmp(line, "ss\n") == 0)
		ss(*stack_a, *stack_b);
	else if (ft_strncmp(line, "rr\n") == 0)
		rr(stack_a, stack_b);
	else if (ft_strncmp(line, "rrr\n") == 0)
		rrr(stack_a, stack_b);
}

void	checker(t_stack **stack_a, t_stack **stack_b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (ft_strncmp(line, "sa\n") == 0 || ft_strncmp(line, "sb\n") == 0
			|| ft_strncmp(line, "ra\n") == 0 || ft_strncmp(line, "rb\n") == 0)
			op_1(stack_a, stack_b, line);
		else if (ft_strncmp(line, "pa\n") == 0 || ft_strncmp(line, "pb\n") == 0
			|| ft_strncmp(line, "rra\n") == 0 || ft_strncmp(line, "rrb\n") == 0)
			op_2(stack_a, stack_b, line);
		else if (ft_strncmp(line, "ss\n") == 0 || ft_strncmp(line, "rr\n") == 0
			|| ft_strncmp(line, "rrr\n") == 0)
			op_3(stack_a, stack_b, line);
		else
		{
			write(2, "Error\n", 6);
			free(line);
			exit(1);
		}
		free(line);
		line = get_next_line(0);
	}
	is_sorted_check(*stack_a,*stack_b);
}
