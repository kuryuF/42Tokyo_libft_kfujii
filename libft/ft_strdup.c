/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:00:56 by kfujii            #+#    #+#             */
/*   Updated: 2022/11/27 16:03:34 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strdup(char *str)
{
	char	*p;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(str);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	ft_strlcpy(p, str, len + 1);
	return (p);
}
