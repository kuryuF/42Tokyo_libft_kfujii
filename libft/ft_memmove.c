/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:56:15 by kfujii            #+#    #+#             */
/*   Updated: 2022/12/05 11:31:48 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;

	if (dst == NULL && src == NULL)
		return (NULL);
	p = (unsigned char *)dst;
	q = (unsigned char *)src;
	if (p > q)
	{
		while (n > 0)
		{
			p[n - 1] = q[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(p, q, n);
	return (p);
}
