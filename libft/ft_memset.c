/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:56:36 by kfujii            #+#    #+#             */
/*   Updated: 2022/10/28 18:53:07 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*p;
	unsigned char	c;
	size_t			i;

	p = (unsigned char *)buf;
	c = (unsigned char)ch;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (buf);
}
