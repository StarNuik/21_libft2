/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 15:20:38 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/08 16:32:39 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;

	if (!lst || !f)
		return (NULL);
	res = f(lst);
	if (!res)
		return (ft_lstmap(lst->next, f));
	if (lst->next)
		res->next = ft_lstmap(lst->next, f);
	return (res);
}
