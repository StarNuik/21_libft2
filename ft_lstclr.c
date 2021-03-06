/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:31:40 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/10 14:00:47 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclr(t_list **lst)
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
	*lst = NULL;
}
