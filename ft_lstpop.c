/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 14:50:26 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/09 18:13:19 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpop(t_list **targetlst)
{
	t_list	*tar;

	if (!targetlst || !*targetlst)
		return ;
	tar = *targetlst;
	if ((*targetlst)->next)
		ft_lstpop(&(*targetlst)->next);
	else
		ft_lstclr(targetlst);
}
