/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 17:10:05 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/15 16:59:58 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *src, char (*f)(char))
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
		s[len] = f(src[len]);
	return (s);
}
