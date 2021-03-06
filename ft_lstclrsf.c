/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclrsf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 13:59:10 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/10 14:14:13 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclrsf(t_list **lst)
{
	if (!lst)
		return ;
	if (!(*lst)->content)
	{
		(*lst)->content_size = 0;
	}
	else
	{
		free((*lst)->content);
		(*lst)->content = NULL;
		(*lst)->content_size = 0;
	}
	free(*lst);
	if (!(*lst)->next)
		*lst = NULL;
	else
		*lst = (*lst)->next;
}
