/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:33:52 by kfujii            #+#    #+#             */
/*   Updated: 2022/10/25 11:34:23 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_nd;

	if (lst == NULL || del == NULL)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		new_nd = ft_lstnew(f(lst->content));
		if (new_nd == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_nd);
		lst = lst->next;
	}
	return (new_lst);
}
