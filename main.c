/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:30:17 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/31 20:23:45 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(char **split, t_stack **stack_a)
{
	int	i;

	i = 0;
	while (split[i])
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(split[i++])));
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
	indexing_elements(&stack_a);
	normal_case(&stack_a);
	if (ft_lstsize(stack_a) == 2)
		two_case(&stack_a);
	else if (ft_lstsize(stack_a) == 3)
		three_case(&stack_a);
	else if (ft_lstsize(stack_a) > 3 && ft_lstsize(stack_a) <= 20)
		five_case(&stack_a, &stack_b);
	else if (ft_lstsize(stack_a) > 20 && ft_lstsize(stack_a) <= 50)
		algo(&stack_a, &stack_b, 15);
	else if (ft_lstsize(stack_a) > 50 && ft_lstsize(stack_a) <= 200)
		algo(&stack_a, &stack_b, 5);
	else if (ft_lstsize(stack_a) > 200 && ft_lstsize(stack_a) <= 500)
		algo(&stack_a, &stack_b, 8);
	return (0);
}
