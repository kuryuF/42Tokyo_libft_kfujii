/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:30:47 by kfujii            #+#    #+#             */
/*   Updated: 2022/10/25 11:31:00 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp_lst;

	if (*lst != NULL && lst != NULL)
	{
		tmp_lst = *lst;
		tmp_lst = ft_lstlast(*lst);
		tmp_lst->next = new;
		return ;
	}
	*lst = new;
}
