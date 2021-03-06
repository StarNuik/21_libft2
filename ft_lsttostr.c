/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttostr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 22:24:16 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/09 18:14:11 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lsttostr(t_list *data)
{
	size_t	len;
	char	*res;
	t_list	*item;

	if (!data)
		return (NULL);
	len = 0;
	item = data;
	while (item)
	{
		len += item->content_size;
		item = item->next;
	}
	res = ft_strnew(len);
	if (!res)
		return (NULL);
	item = data;
	while (item)
	{
		ft_strcat(res, item->content);
		item = item->next;
	}
	return (res);
}
