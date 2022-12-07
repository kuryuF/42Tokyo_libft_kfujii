/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:34:35 by kfujii            #+#    #+#             */
/*   Updated: 2022/12/07 11:47:51 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*np;

	np = (t_list *)malloc(sizeof(t_list));
	if (np == NULL)
		return (NULL);
	np->content = content;
	np->next = NULL;
	return (np);
}
