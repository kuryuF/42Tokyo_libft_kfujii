/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:32:39 by kfujii            #+#    #+#             */
/*   Updated: 2022/11/27 14:44:50 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_lst;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp_lst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp_lst;
	}
	*lst = NULL;
}
