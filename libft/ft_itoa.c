/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:30:10 by kfujii            #+#    #+#             */
/*   Updated: 2022/11/27 14:43:21 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_get_digit(int n)
{
	int	digit;

	digit = 0;
	if (n <= 0)
		digit++;
	while (n)
	{
		digit++;
		n = n / 10;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digit;
	long	num;

	digit = ft_get_digit(n);
	num = n;
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = num * (-1);
	}
	if (num == 0)
		str[0] = '0';
	str[digit] = '\0';
	digit--;
	while (num)
	{
		str[digit] = num % 10 + '0';
		digit--;
		num = num / 10;
	}
	return (str);
}
