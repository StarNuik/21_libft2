/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:45:38 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/15 16:52:28 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
