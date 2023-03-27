/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:55:23 by rennacir          #+#    #+#             */
/*   Updated: 2023/03/27 10:47:39 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_arguments(int argc)
{
	if (argc == 1)
	{
		write(2, "Error :argc must be more than 1\n", 33);
		exit(1);
	}
}

void check_max_int(char **splited)
{
	int i;

	i = 0;
	while(splited[i])
	{
		if(ft_atoi(splited[i]) > 2147483647)
		{
			write(2,"Error : argc most not be more than max of int",45);
			exit(1);
		}
		else if (ft_atoi(splited[i]) < -2147483648)
		{
			write(2,"Error : argc most not be less than min of int",45);
			exit(1);
		}
		else
			return ;
		i++;
	}
}

void check_duplication(char **splited)
{
	int i = 0;
	int j;
	int count = 0;
	while (splited[i])
	{
		count++;
		i++;
	}
	i = 0;
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

char **check(int argc, char **argv)
{
	int i = 0;
	int k;
	char *join;
	char **split;

	join = ft_strjoin(argc - 1, argv + 1, " ");
	split = ft_split(join, ' ');
	free(join);
	while (split[i])
	{
		plus_or_minus_case(split[i]);
		k = 0;
		if (split[i][k] == '+' || split[i][k] == '-')
			k++;
		while (split[i][k])
		{
			if (split[i][k] < 48 || split[i][k] > 57)
			{
				write(2, "args must be integers", 22);
				exit(1);
			}
			k++;
		}
		i++;
	}
	return (split);
}

void	plus_or_minus_case(char *str)
{
	int i;

	i = 0;
	if((str[i] == '+' && str[i+ 1] == '\0') || (str[i] == '-' && str[i+ 1] == '\0'))
		{
			write(2,"Error : agr must not contain only a signe",42);
			exit(1);
		}
}