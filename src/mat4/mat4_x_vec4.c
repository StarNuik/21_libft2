/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_x_vec4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 10:12:55 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 15:44:18 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

static float	helper(const float *m, const t_vec4 vector, const int y)
{
	return (m[y + 0] * vector.x + m[y + 1] * vector.y +
	m[y + 2] * vector.z + m[y + 3] * vector.w);
}

t_vec4			ft_m4xv4(const t_mat4 matrix, const t_vec4 vector)
{
	t_vec4		result;

	result.x = helper(matrix.value, vector, 0);
	result.y = helper(matrix.value, vector, 4);
	result.z = helper(matrix.value, vector, 8);
	result.w = helper(matrix.value, vector, 12);
	return (result);
}
