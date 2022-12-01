/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:33:17 by kfujii            #+#    #+#             */
/*   Updated: 2022/10/25 11:33:31 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp_lst;

	if (lst == NULL || f == NULL)
		return ;
	tmp_lst = lst;
	while (tmp_lst != NULL)
	{
		f(tmp_lst->content);
		tmp_lst = tmp_lst->next;
	}
}
