/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 21:40:01 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/06 19:31:42 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	size_t	len;
	size_t	qt;

	if (!s)
		return ;
	len = ft_strlen(s);
	qt = 0;
	while (qt < len)
		ft_putchar_fd(s[qt++], fd);
}
