/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 12:22:41 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/15 17:06:27 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *hay, const char *nee)
{
	char	*s;

	if (!hay || !nee)
		return (NULL);
	s = (char*)hay - 1;
	if (!*nee)
		return ((char*)hay);
	while (*(++s))
		if (*s == *nee)
			if (!ft_memcmp(s, nee, ft_strlen(nee)))
				return (s);
	return (NULL);
}
