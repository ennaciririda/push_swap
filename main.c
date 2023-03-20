/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:30:17 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/20 16:51:27 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void fill_stack(char **split, t_stack **stack_a)
{
	int i = 0;
	while (split[i])
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(split[i++])));
}

int main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;
	stack_b = NULL;
	char **split;
	check_arguments(argc);
	split = check(argc, argv);
	check_duplication(split);
	fill_stack(split,&stack_a);
	//five_case(&stack_a,&stack_b);
	hundred_case(&stack_a, &stack_b);
	// while(stack_a)
	// {
	// 	printf("%d ",stack_a->data);
	// 	stack_a = stack_a->next;
	// }
	while(stack_b)
	{
		printf("%d ",stack_b->data);
		stack_b = stack_b->next;
	}
	printf("\n");
	while(stack_a)
	{
		printf("%d ",stack_a->data);
		stack_a = stack_a->next;
	}

}