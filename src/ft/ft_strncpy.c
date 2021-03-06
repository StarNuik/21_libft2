/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:47:50 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

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
