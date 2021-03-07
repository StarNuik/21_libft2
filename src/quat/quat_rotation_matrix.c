/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_rotation_matrix.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 21:33:53 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 16:49:11 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_mat4		quat_rotation_matrix(const t_quat rot)
{
	t_mat4	r;

	r = mat4_identity();
	r.value[0] = 1.0f - 2.0f * rot.y * rot.y - 2.0f * rot.z * rot.z;
	r.value[4] = 2.0f * rot.x * rot.y - 2.0f * rot.w * rot.z;
	r.value[8] = 2.0f * rot.x * rot.z + 2.0f * rot.w * rot.y;
	r.value[1] = 2.0f * rot.x * rot.y + 2.0f * rot.w * rot.z;
	r.value[5] = 1.0f - 2.0f * rot.x * rot.x - 2.0f * rot.z * rot.z;
	r.value[9] = 2.0f * rot.y * rot.z - 2.0f * rot.w * rot.x;
	r.value[2] = 2.0f * rot.x * rot.z - 2.0f * rot.w * rot.y;
	r.value[6] = 2.0f * rot.y * rot.z + 2.0f * rot.w * rot.x;
	r.value[10] = 1.0f - 2.0f * rot.x * rot.x - 2.0f * rot.y * rot.y;
	return (r);
}
