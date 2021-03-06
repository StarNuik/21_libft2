/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:58:32 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

void	*ft_memccpy(void *dst, const void *src, int ch, size_t len)
{
	unsigned char	*to;
	unsigned char	*from;
	unsigned char	sym;

	if (!dst)
		return (NULL);
	if (!src)
		return (dst);
	to = (unsigned char*)dst;
	from = (unsigned char*)src;
	sym = (unsigned char)ch;
	while (len-- > 0)
	{
		*to = *from;
		if (*to == sym)
			return ((void*)(++to));
		to++;
		from++;
	}
	return (NULL);
}
