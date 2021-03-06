/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:24:19 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

void	ft_putvar(void *ptr, size_t size)
{
	unsigned char	*mem;
	size_t			qt;

	if (!ptr)
		return ;
	mem = ptr;
	ft_putstr("| s:");
	ft_putnbr((int)size);
	ft_putstr(" v:");
	qt = -1;
	while (++qt < size)
	{
		ft_putbyte(mem[qt]);
		ft_putstr(" ");
	}
	ft_putstr("|\n");
}
