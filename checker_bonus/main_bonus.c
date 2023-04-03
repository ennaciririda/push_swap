/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 21:48:47 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/03 00:17:02 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fill_stack(char **split, t_stack **stack_a)
{
	int	i;

	i = 0;
	while (split[i])
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(split[i++])));
}

static void	free_any_stack(t_stack *stack)
{
	t_stack	*node;

	while (stack)
	{
		node = stack->next;
		free(stack);
		stack = node;
	}
}

static char	**free_all(char **split)
{
	int	j;

	j = 0;
	while (split[j])
	{
		free(split[j]);
		j++;
	}
	free(split);
	return (NULL);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**split;

	check_arguments(argc);
	split = check(argc, argv);
	check_max_int(split);
	check_duplication(split);
	fill_stack(split, &stack_a);
	free_all(split);
	checker(&stack_a, &stack_b);
	free_any_stack(stack_a);
	free_any_stack(stack_b);
	return (0);
}
