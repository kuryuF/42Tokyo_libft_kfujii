/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:07:57 by kfujii            #+#    #+#             */
/*   Updated: 2022/12/07 12:17:24 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (0 < i)
	{
		if (s[i] == (const char)c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[0] == (const char)c)
		return ((char *)&s[0]);
	return (NULL);
}
