/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:47:50 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/15 17:02:50 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	qt;

	if (!dst || !src)
		return (NULL);
	if (len == 0)
		return (dst);
	dst = ft_memcpy(dst, src, len);
	qt = ft_strlen(src);
	if (qt < len)
		ft_bzero((void*)(dst + qt), len - qt);
	return (dst);
}
