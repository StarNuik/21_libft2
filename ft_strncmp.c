/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:16:28 by sbosmer           #+#    #+#             */
/*   Updated: 2019/04/16 13:48:01 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	if (!s1 || !s2)
		return (0);
	return (ft_memcmp(s1, s2,
		ft_strlen(s1) + 1 < len ? ft_strlen(s1) + 1 : len));
}
