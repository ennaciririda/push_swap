/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:14:19 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/02 15:38:40 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int		count;
	t_stack	*ls;

	count = 0;
	ls = lst;
	while (ls != NULL)
	{
		count++;
		ls = ls->next;
	}
	return (count);
}
