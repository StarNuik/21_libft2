/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_v3tov4point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:34:45 by sbosmer           #+#    #+#             */
/*   Updated: 2019/06/18 16:36:47 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector4	ft_v3tov4point(t_vector3 a)
{
	t_vector4	res;

	res.x = a.x;
	res.y = a.y;
	res.z = a.z;
	res.w = 1.0;
	return (res);
}
