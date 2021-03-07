/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_rotate_around.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 09:22:00 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 16:54:51 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_quat		quat_rotate_around(const t_vec3 axis, const float degrees)
{
	t_quat	result;
	float	radians;

	radians = degrees * DEG2RAD;
	result.w = cosf(radians / 2.0f);
	result.x = axis.x * sinf(radians / 2.0f);
	result.y = axis.y * sinf(radians / 2.0f);
	result.z = axis.z * sinf(radians / 2.0f);
	return (result);
}
