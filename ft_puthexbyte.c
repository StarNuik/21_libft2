/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexbyte.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:32:00 by sbosmer           #+#    #+#             */
/*   Updated: 2019/05/01 16:38:55 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthexbyte(unsigned char c)
{
	char	*hex_sheet;

	hex_sheet = "0123456789ABCDEF";
	ft_putchar(hex_sheet[(c & (15 << 4)) >> 4]);
	ft_putchar(hex_sheet[c & 15]);
}
