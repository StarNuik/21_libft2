/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:17:29 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/15 16:57:42 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	qt;

	if (!dst)
		return (NULL);
	if (!src)
		return (dst);
	qt = ft_strlen(src) + 1;
	dst = (char*)ft_memcpy(dst, src, qt);
	return (dst);
}
