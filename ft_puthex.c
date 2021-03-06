/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:40:06 by sbosmer           #+#    #+#             */
/*   Updated: 2019/05/13 11:11:23 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_puthex(void *ptr, size_t var_size, size_t len, size_t indent)
{
	size_t			qt;
	unsigned char	*mem;
	size_t			rev_len;

	indent = !indent ? L_MAX : indent;
	rev_len = 0;
	mem = (unsigned char*)ptr;
	ft_putstr("|");
	while (len--)
	{
		qt = var_size;
		ft_putstr(" ");
		ft_putnbr(rev_len++);
		ft_putstr(": ");
		while (--qt < var_size)
		{
			ft_puthexbyte(mem[qt]);
			ft_putstr(" ");
		}
		mem += var_size;
		ft_putstr("|");
		if (!(rev_len % indent) && len)
			ft_putstr("\n|");
	}
	ft_putstr("\n");
}
