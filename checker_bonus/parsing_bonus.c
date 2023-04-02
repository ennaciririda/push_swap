/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:55:23 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/01 21:47:06 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	help_fun(int i)
{
	if (i < 48 || i > 57)
	{
		write(2, "args must be integers", 21);
		exit(1);
	}
}

void	plus_or_minus_case(char *str)
{
	int	i;

	i = 0;
	if ((str[i] == '+' && str[i + 1] == '\0')
		|| (str[i] == '-' && str[i + 1] == '\0'))
	{
		write(2, "Error : agr must not contain only a signe", 42);
		exit(1);
	}
}

void	check_arguments(int argc)
{
	if (argc == 1)
	{
		write(2, "Error :argc must be more than 1\n", 33);
		exit(1);
	}
}

char	**check(int argc, char **argv)
{
	char	**split;
	char	*join;
	int		i;
	int		k;

	i = -1;
	join = ft_strjoin_(argc - 1, argv + 1, " ");
	split = ft_split(join, ' ');
	free(join);
	while (split[++i])
	{
		plus_or_minus_case(split[i]);
		k = 0;
		if (split[i][k] == '+' || split[i][k] == '-')
			k++;
		while (split[i][k])
		{
			help_fun(split[i][k]);
			k++;
		}
	}
	return (split);
}
