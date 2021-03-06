/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 21:37:44 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/06 16:09:56 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	ch[2];

	if (c >= 0)
		write(fd, &c, 1);
	else
	{
		ch[0] = (3 << 6) + ((unsigned char)c >> 6);
		ch[1] = (1 << 7) + ((unsigned char)c & 63);
		write(fd, ch, 2);
	}
}
