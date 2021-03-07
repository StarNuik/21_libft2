/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_invert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 10:18:09 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 16:43:32 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_quat		quat_invert(const t_quat quaternion)
{
	float	length;
	t_quat	result;

	length = 1.0f / (quaternion.x * quaternion.x + quaternion.y * quaternion.y +
		quaternion.z * quaternion.z + quaternion.w * quaternion.w);
	result.w = quaternion.w * length;
	result.x = quaternion.x * -length;
	result.y = quaternion.y * -length;
	result.z = quaternion.z * -length;
	return (result);
}
