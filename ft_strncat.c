/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:47:44 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/16 13:08:07 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t len)
{
	size_t	temp;
	char	*s;

	if (!s1 || !s2)
		return (0);
	temp = ft_strlen(s2);
	if (temp < len)
		len = temp;
	s = s1 + ft_strlen(s1);
	s = (char*)ft_memcpy(s, s2, len);
	s[len] = 0;
	return (s1);
}
