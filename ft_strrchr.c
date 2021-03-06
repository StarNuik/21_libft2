/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 12:19:49 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/15 17:06:08 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int ch)
{
	char	*s;

	if (!src)
		return (NULL);
	s = ((char*)src + ft_strlen(src) + 1);
	while (--s != src)
		if (*s == (char)ch)
			return (s);
	if (*s == (char)ch)
		return (s);
	return (NULL);
}
