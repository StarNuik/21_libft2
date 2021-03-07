/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_x_vec3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:43:49 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 16:56:03 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_vec3		quat_x_vec3(const t_quat quaternion, const t_vec3 vector)
{
	t_quat	temp;

	temp = (t_quat){0.0f, vector.x, vector.y, vector.z};
	temp = quat_multiply(quaternion, temp);
	temp = quat_multiply(temp, quat_invert(quaternion));
	return ((t_vec3){temp.x, temp.y, temp.z});
}
