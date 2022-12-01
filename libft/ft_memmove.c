/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:56:15 by kfujii            #+#    #+#             */
/*   Updated: 2022/11/27 15:30:36 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	p = (unsigned char *)dst;
	q = (unsigned char *)src;
	i = 0;
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
