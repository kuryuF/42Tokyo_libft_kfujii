/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:55:32 by kfujii            #+#    #+#             */
/*   Updated: 2022/10/28 19:04:58 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	p = (unsigned char *)dst;
	q = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		p[i] = q[i];
		i++;
	}
	return (dst);
}
