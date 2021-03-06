/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:02:04 by sbosmer           #+#    #+#             */
/*   Updated: 2019/05/01 14:44:26 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_realloc(void *origin, size_t original_size, size_t new_size)
{
	void	*res;

	res = ft_memalloc(new_size);
	if (!res)
		return (NULL);
	res = ft_memcpy(res, origin, original_size);
	free(origin);
	return (res);
}
