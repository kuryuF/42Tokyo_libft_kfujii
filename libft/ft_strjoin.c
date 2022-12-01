/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:02:37 by kfujii            #+#    #+#             */
/*   Updated: 2022/11/27 16:04:48 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*p;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	p = (char *)malloc(sizeof(char) * ((s1_len + s2_len) + 1));
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s1, s1_len + 1);
	ft_strlcpy(p + (s1_len), s2, s2_len + 1);
	return (p);
}
