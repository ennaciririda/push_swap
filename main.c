/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:30:17 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/22 21:58:06 by rennacir         ###   ########.fr       */
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
	t_stack *tmp;
	// int i = 0;
	t_stack *stack_b;
	stack_b = NULL;
	char **split;
	check_arguments(argc);
	split = check(argc, argv);
	check_duplication(split);
	fill_stack(split,&stack_a);
	//five_case(&stack_a,&stack_b);
	tmp = stack_a;
	indexing_elements(&stack_a);
	// while(tmp)
	// {
	// 	printf("data %d --- index : %d\n",tmp->data, tmp->index);
	// 	tmp = tmp->next;
	// }
	// pb(&stack_a,&stack_b);
	// printf("--------------\n");
	// tmp = stack_a;
	// while(tmp)
	// {
	// 	printf("data %d --- index : %d\n",tmp->data, tmp->index);
	// 	tmp = tmp->next;
	// }
	algo(&stack_a, &stack_b, 4);
	tmp = stack_a;
	// printf("-----------------------");
	// while(tmp)
	// {
	// 	printf("%d",tmp->data);
	// 	tmp = tmp->next;
	// }

		//printf("%d hfghf", ft_lstsize(stack_b));

}