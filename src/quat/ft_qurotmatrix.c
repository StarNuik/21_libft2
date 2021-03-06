/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qurotmatrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 21:33:53 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

t_matrix4x4		ft_qurotmatrix(t_ernion rot)
{
	t_matrix4x4		res;

	res = ft_m4identity();
	res.value[0][0] = 1.0 - 2.0 * pow(rot.y, 2.0) - 2.0 * pow(rot.z, 2.0);
	res.value[1][0] = 2.0 * rot.x * rot.y - 2.0 * rot.w * rot.z;
	res.value[2][0] = 2.0 * rot.x * rot.z + 2.0 * rot.w * rot.y;
	res.value[0][1] = 2.0 * rot.x * rot.y + 2.0 * rot.w * rot.z;
	res.value[1][1] = 1.0 - 2.0 * pow(rot.x, 2.0) - 2.0 * pow(rot.z, 2.0);
	res.value[2][1] = 2.0 * rot.y * rot.z - 2.0 * rot.w * rot.x;
	res.value[0][2] = 2.0 * rot.x * rot.z - 2.0 * rot.w * rot.y;
	res.value[1][2] = 2.0 * rot.y * rot.z + 2.0 * rot.w * rot.x;
	res.value[2][2] = 1.0 - 2.0 * pow(rot.x, 2.0) - 2.0 * pow(rot.y, 2.0);
	return (res);
}
