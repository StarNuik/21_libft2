/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstunshift.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 22:18:49 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/15 16:49:20 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstunshift(t_list **targetlst, void const *content,
	size_t content_size)
{
	t_list	*item;

	if (!targetlst)
		return (0);
	item = ft_lstnew(content, content_size);
	if (!item)
		return (0);
	ft_lstadd(targetlst, item);
	return (1);
}
