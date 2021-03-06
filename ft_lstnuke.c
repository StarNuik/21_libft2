/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnuke.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:04:43 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/09 15:10:29 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstnuke(t_list **targetlst)
{
	if (!targetlst || !*targetlst)
		return ;
	if ((*targetlst)->next)
		ft_lstnuke(&(*targetlst)->next);
	ft_lstclr(targetlst);
}
