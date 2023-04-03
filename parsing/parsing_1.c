/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 21:21:59 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/02 23:54:39 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_duplication(char **splited)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (splited[count])
		count++;
	while (i < (count - 1))
	{
		j = i + 1;
		while (j < count)
		{
			if (ft_atoi(splited[i]) == ft_atoi(splited[j]))
			{
				write(2, "there is a duplicate number\n", 29);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	check_max_int(char **splited)
{
	int	i;

	i = 0;
	while (splited[i])
	{
		if (ft_atoi(splited[i]) > 2147483647)
		{
			write(2, "Error : argc most not be more than max of int", 45);
			exit(1);
		}
		if (ft_atoi(splited[i]) < -2147483648)
		{
			write(2, "Error : argc most not be less than min of int", 45);
			exit(1);
		}
		i++;
	}
}
