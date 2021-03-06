/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:01:53 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/15 16:58:00 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	qt;

	if (!s)
		return (NULL);
	qt = ft_strlen(s) + 1;
	res = (char*)malloc(sizeof(char) * qt);
	if (!res)
		return (NULL);
	res = (char*)ft_memcpy(res, s, qt);
	return (res);
}
