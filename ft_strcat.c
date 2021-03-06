/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:25:44 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/15 16:54:21 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	qt;
	char	*s;

	if (!s1 || !s2)
		return (NULL);
	s = s1 + ft_strlen(s1);
	qt = ft_strlen(s2);
	s = (char*)ft_memcpy(s, s2, qt);
	s[qt] = 0;
	return (s1);
}
