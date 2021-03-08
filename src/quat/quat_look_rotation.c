/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_look_rotation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:49:16 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 17:31:01 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_quat		quat_look_rotation(const t_vec3 forward, const t_vec3 upward)
{
	t_vec3	temp;
	t_quat	result;
	float	l0;
	float	l1;

	temp = vec3_cross(forward, upward);
	result = (t_quat){0.0f, temp.x, temp.y, temp.z};
	l0 = vec3_length(forward);
	l1 = vec3_length(upward);
	result.w = sqrtf(l0 * l0 * l1 * l1) + vec3_dot(forward, upward);
	return (result);
}
