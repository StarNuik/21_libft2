/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:49:42 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 19:28:26 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tar_c;
	unsigned char	*from_c;
	unsigned long	*tar_l;
	unsigned long	*from_l;

	if (!dst || !src)
		return (NULL);
	tar_l = (unsigned long*)dst;
	from_l = (unsigned long*)src;
	while (n / (sizeof(long) * 4) > 0)
	{
		tar_l[0] = from_l[0];
		tar_l[1] = from_l[1];
		tar_l[2] = from_l[2];
		tar_l[3] = from_l[3];
		tar_l += 4;
		from_l += 4;
		n -= (sizeof(long) * 4);
	}
	tar_c = (unsigned char*)tar_l;
	from_c = (unsigned char*)from_l;
	while (n-- > 0)
		*tar_c++ = *from_c++;
	return (dst);
}
