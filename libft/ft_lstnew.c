/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:34:35 by kfujii            #+#    #+#             */
/*   Updated: 2022/11/27 14:46:48 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*np;

	np = malloc(sizeof(t_list));
	if (np == NULL)
		return (NULL);
	else
	{
		np->content = content;
		np->next = NULL;
		return (np);
	}
}
