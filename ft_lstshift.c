/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstshift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:01:01 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/09 18:13:24 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstshift(t_list **targetlst)
{
	t_list	*temp;

	if (!targetlst || !*targetlst)
		return ;
	if (!(*targetlst)->next)
	{
		ft_lstclr(targetlst);
		return ;
	}
	temp = (*targetlst)->next;
	ft_lstclr(targetlst);
	*targetlst = temp;
}
