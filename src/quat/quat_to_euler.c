/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_to_euler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:32:13 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 16:49:03 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_vec3		quat_to_euler(const t_quat q)
{
	t_vec3	result;

	result.x = atan2f(2.0f * (q.w * q.x + q.y * q.z),
		1.0f - 2.0f * (q.x * q.x + q.y * q.y));
	result.y = asinf(2.0f * (q.w * q.y - q.z * q.w));
	result.z = atan2f(2.0f * (q.w * q.z + q.x * q.y),
		1.0f - 2.0f * (q.y * q.y + q.z * q.z));
	return (result);
}
