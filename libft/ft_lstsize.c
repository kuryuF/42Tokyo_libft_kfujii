/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:54:36 by kfujii            #+#    #+#             */
/*   Updated: 2022/10/25 11:54:45 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp_lst;
	int		count;

	tmp_lst = lst;
	count = 0;
	while (tmp_lst != NULL)
	{
		tmp_lst = tmp_lst->next;
		count++;
	}
	return (count);
}
