/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:30:17 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/28 01:16:23 by rennacir         ###   ########.fr       */
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
	// t_stack *tmp;
	int		num;
	t_stack *stack_b;
	stack_a = NULL;
	stack_b = NULL;
	char **split;
	check_arguments(argc);
	split = check(argc, argv);
	check_max_int(split);
	check_duplication(split);
	fill_stack(split,&stack_a);
	indexing_elements(&stack_a);
	normal_case(&stack_a);
	num = ft_lstsize(stack_a);

	if (num == 2)
		two_case(&stack_a);
	else if(num == 3)
		three_case(&stack_a);
	else if (num > 3 && num <= 20)
		five_case(&stack_a,&stack_b);
	else if (num > 20 && num <= 50)
		algo(&stack_a, &stack_b, 15);
	else if (num > 50 && num <= 200)
		algo(&stack_a, &stack_b, 5);
	else if (num > 200 && num <= 500)
		algo(&stack_a, &stack_b, 8);
	// rra(&stack_a,1);
	// system("leaks push_swap");
	// push_element_to_top_(&stack_a, -65);
	// tmp = stack_a;
	// printf("-----------------------\n");
	// while(tmp)
	// {
	// 	printf("%d  ",tmp->data);
	// 	tmp = tmp->next;
	// }
		//printf("%d hfghf", ft_lstsize(stack_b));
	// 100 15 chunks
	//50  27 chunks
}