/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:52:14 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

int	ft_memcmp(const void *in1, const void *in2, size_t len)
{
	size_t	qt;
	char	*s1;
	char	*s2;

	if (!in1 || !in2)
		return (0);
	s1 = (char*)in1;
	s2 = (char*)in2;
	qt = -1;
	while (++qt < len)
		if (s1[qt] != s2[qt])
			return ((unsigned char)s1[qt] - (unsigned char)s2[qt]);
	return (0);
}
