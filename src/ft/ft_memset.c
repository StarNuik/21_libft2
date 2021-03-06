/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:45:38 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

void	*ft_memset(void *src, int ch, size_t len)
{
	unsigned char	*tar;
	unsigned char	sym;

	if (!src)
		return (NULL);
	sym = (unsigned char)ch;
	tar = (unsigned char*)src;
	while (len--)
		*tar++ = sym;
	return (src);
}
