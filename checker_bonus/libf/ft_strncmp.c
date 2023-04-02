/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rennacir <rennacir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:48:43 by rennacir          #+#    #+#             */
/*   Updated: 2023/04/02 17:39:10 by rennacir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_strncmp(const char *first, const char *second, size_t n)
{
	size_t			i;
	unsigned char	*f;
	unsigned char	*s;

	f = (unsigned char *)first;
	s = (unsigned char *)second;
	i = 0;
	while ((f[i] || s[i]) && i < n)
	{
		if (f[i] != s[i])
			return (f[i] - s[i]);
			i++;
	}
	return (0);
}
