/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 17:57:13 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/08 11:43:16 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(int c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*res;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] && is_space(s[start]))
		start++;
	while (s[end] && is_space(s[end]))
		end--;
	end++;
	if (start >= end)
		return (ft_strnew(0));
	res = ft_strsub(s, start, end - start);
	if (!res)
		return (NULL);
	return (res);
}
