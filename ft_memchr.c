/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:37:13 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/15 16:50:50 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t len)
{
	unsigned char	*s;
	unsigned char	ch;

	if (!src)
		return (NULL);
	s = (unsigned char*)src;
	ch = (unsigned char)c;
	while (len-- > 0)
		if (*s++ == ch)
			return ((void*)--s);
	return (NULL);
}
