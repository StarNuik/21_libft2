/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:01:53 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

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
