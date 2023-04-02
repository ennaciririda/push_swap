/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 21:48:47 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/02 00:10:29 by rennacir         ###   ########.fr       */
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
	checker(&stack_a, &stack_b);
	system("leaks checker");
	return (0);
}