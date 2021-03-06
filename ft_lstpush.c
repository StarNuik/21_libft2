/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:44:41 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/15 16:47:34 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstpush(t_list **targetlst, void const *content, size_t content_size)
{
	t_list	*item;

	if (!targetlst)
		return (0);
	item = ft_lstnew(content, content_size);
	if (!item)
		return (0);
	ft_lstaddend(targetlst, item);
	return (1);
}
