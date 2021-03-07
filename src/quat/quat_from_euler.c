/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_from_euler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 09:29:29 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 16:55:45 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_quat		quat_from_euler(const t_vec3 euler_degrees)
{
	t_quat	result;
	t_quat	temp;

	result = QUAT_IDENTITY;
	temp = quat_rotate_around(VEC3_FORWARD, euler_degrees.z);
	result = quat_multiply(result, temp);
	temp = quat_rotate_around(VEC3_UP, euler_degrees.y);
	result = quat_multiply(result, temp);
	temp = quat_rotate_around(VEC3_RIGHT, euler_degrees.x);
	result = quat_multiply(result, temp);
	return (result);
}
