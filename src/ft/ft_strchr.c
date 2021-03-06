/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 11:34:23 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

char	*ft_strchr(const char *src, int ch)
{
	char	*s;

	if (!src)
		return (NULL);
	s = (char*)--src;
	while (*(++s))
		if (*s == (char)ch)
			return (s);
	if (*s == (char)ch)
		return (s);
	return (NULL);
}
