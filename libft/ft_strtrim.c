/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:08:09 by kfujii            #+#    #+#             */
/*   Updated: 2022/12/05 11:30:06 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	start_pos(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == NULL)
			break ;
		i++;
	}
	return (i);
}

size_t	end_pos(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen((char *)s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == NULL)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*p;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup((char *)s1));
	start = start_pos(s1, set);
	end = end_pos(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	p = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!p)
		return (NULL);
	ft_strlcpy(p, &s1[start], end - start + 1);
	return (p);
}
