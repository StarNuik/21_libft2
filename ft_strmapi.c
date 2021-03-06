/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 17:21:12 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/15 17:00:04 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *src, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*s;

	if (!src || !f)
		return (NULL);
	len = ft_strlen(src);
	s = ft_strnew(len);
	if (!s)
		return (NULL);
	while (len--)
		s[len] = f((unsigned int)len, src[len]);
	return (s);
}
