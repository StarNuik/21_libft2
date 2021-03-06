/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_v3normalize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 10:35:13 by sbosmer           #+#    #+#             */
/*   Updated: 2019/06/17 22:33:01 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3		ft_v3normalize(t_vector3 a)
{
	t_vector3	res;
	double		len;

	res = V3_ZERO;
	len = ft_v3magnitude(a);
	if (len == 0)
		return (res);
	res = ft_v3multnum(a, 1 / len);
	return (res);
}
