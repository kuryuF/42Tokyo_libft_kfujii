/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:23:04 by kfujii            #+#    #+#             */
/*   Updated: 2022/12/05 11:25:16 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || \
		c == '\f' || c == '\r' || c == '\v')
		return (1);
	return (0);
}

static int	ft_isnum(const char c)
{
	if ('0' <= c && c <= '9')
		return (c - '0');
	return (-1);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				tmp;
	unsigned long	n;
	unsigned long	limit;
	int				sign;

	n = 0;
	i = 0;
	limit = (unsigned long)(LONG_MAX / 10);
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (ft_isnum(str[i]) != -1)
	{
		tmp = ft_isnum(str[i++]);
		if (sign == 1 && (n > limit || (n == limit && tmp > 7)))
			return ((int)LONG_MAX);
		else if (sign == -1 && (n > limit || (n == limit && tmp > 8)))
			return ((int)LONG_MIN);
		n = n * 10 + tmp;
	}
	return (n * sign);
}
