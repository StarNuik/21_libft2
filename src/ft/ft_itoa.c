/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 19:21:49 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

char	*ft_itoa(int n)
{
	unsigned int	num;
	int				qt;
	char			*res;
	int				negi;

	negi = n < 0 ? 1 : 0;
	num = n;
	num = num * (negi ? -1 : 1);
	qt = 1 + negi;
	while (n / 10)
	{
		n = n / 10;
		qt++;
	}
	res = ft_strnew(qt);
	if (!res)
		return (NULL);
	if (negi)
		res[0] = '-';
	while (qt-- >= 1 + negi)
	{
		res[qt] = num % 10 + '0';
		num = num / 10;
	}
	return (res);
}
