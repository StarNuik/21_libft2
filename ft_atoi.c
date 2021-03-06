/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:40:20 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/16 12:59:48 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*skip(char *s)
{
	while (*s == ' ' || *s == '\t' || *s == '\n' ||
		*s == '\v' || *s == '\f' || *s == '\r')
		if (*s)
			s++;
		else
			return (0);
	return (s);
}

int			ft_atoi(const char *str)
{
	char			*s;
	int				sign;
	unsigned long	res;

	res = 0;
	sign = 1;
	s = skip((char*)str);
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		if (sign > 0 && (res > L_MAX / 10 ||
		(res == L_MAX / 10 && (*s - '0') > L_MAX % 10)))
			return (-1);
		else if (sign < 0 && (res > L_MAX / 10 ||
		(res == L_MAX / 10 && (*s - '0') > (L_MAX % 10 + 1))))
			return (0);
		res = res * 10 + *s++ - '0';
	}
	return (sign * res);
}
