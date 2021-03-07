/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_invert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 10:02:37 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 15:12:26 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

static void	part0(const float *m, float *inv)
{
	inv[0] = m[5] * m[10] * m[15] - m[5] * m[11] * m[14] -
		m[9] * m[6] * m[15] + m[9] * m[7] * m[14] +
		m[13] * m[6] * m[11] - m[13] * m[7] * m[10];
	inv[4] = -m[4] * m[10] * m[15] + m[4] * m[11] * m[14] +
		m[8] * m[6] * m[15] - m[8] * m[7] * m[14] -
		m[12] * m[6] * m[11] + m[12] * m[7] * m[10];
	inv[8] = m[4] * m[9] * m[15] - m[4] * m[11] * m[13] -
		m[8] * m[5] * m[15] + m[8] * m[7] * m[13] +
		m[12] * m[5] * m[11] - m[12] * m[7] * m[9];
	inv[12] = -m[4] * m[9] * m[14] + m[4] * m[10] * m[13] +
		m[8] * m[5] * m[14] - m[8] * m[6] * m[13] -
		m[12] * m[5] * m[10] + m[12] * m[6] * m[9];
	inv[1] = -m[1] * m[10] * m[15] + m[1] * m[11] * m[14] +
		m[9] * m[2] * m[15] - m[9] * m[3] * m[14] -
		m[13] * m[2] * m[11] + m[13] * m[3] * m[10];
	inv[5] = m[0] * m[10] * m[15] - m[0] * m[11] * m[14] -
		m[8] * m[2] * m[15] + m[8] * m[3] * m[14] +
		m[12] * m[2] * m[11] - m[12] * m[3] * m[10];
	inv[9] = -m[0] * m[9] * m[15] + m[0] * m[11] * m[13] +
		m[8] * m[1] * m[15] - m[8] * m[3] * m[13] -
		m[12] * m[1] * m[11] + m[12] * m[3] * m[9];
	inv[13] = m[0] * m[9] * m[14] - m[0] * m[10] * m[13] -
		m[8] * m[1] * m[14] + m[8] * m[2] * m[13] +
		m[12] * m[1] * m[10] - m[12] * m[2] * m[9];
}

static void	part1(const float *m, float *inv)
{
	inv[2] = m[1] * m[6] * m[15] - m[1] * m[7] * m[14] -
		m[5] * m[2] * m[15] + m[5] * m[3] * m[14] +
		m[13] * m[2] * m[7] - m[13] * m[3] * m[6];
	inv[6] = -m[0] * m[6] * m[15] + m[0] * m[7] * m[14] +
		m[4] * m[2] * m[15] - m[4] * m[3] * m[14] -
		m[12] * m[2] * m[7] + m[12] * m[3] * m[6];
	inv[10] = m[0] * m[5] * m[15] - m[0] * m[7] * m[13] -
		m[4] * m[1] * m[15] + m[4] * m[3] * m[13] +
		m[12] * m[1] * m[7] - m[12] * m[3] * m[5];
	inv[14] = -m[0] * m[5] * m[14] + m[0] * m[6] * m[13] +
		m[4] * m[1] * m[14] - m[4] * m[2] * m[13] -
		m[12] * m[1] * m[6] + m[12] * m[2] * m[5];
	inv[3] = -m[1] * m[6] * m[11] + m[1] * m[7] * m[10] +
		m[5] * m[2] * m[11] - m[5] * m[3] * m[10] -
		m[9] * m[2] * m[7] + m[9] * m[3] * m[6];
	inv[7] = m[0] * m[6] * m[11] - m[0] * m[7] * m[10] -
		m[4] * m[2] * m[11] + m[4] * m[3] * m[10] +
		m[8] * m[2] * m[7] - m[8] * m[3] * m[6];
	inv[11] = -m[0] * m[5] * m[11] + m[0] * m[7] * m[9] +
		m[4] * m[1] * m[11] - m[4] * m[3] * m[9] -
		m[8] * m[1] * m[7] + m[8] * m[3] * m[5];
	inv[15] = m[0] * m[5] * m[10] - m[0] * m[6] * m[9] -
		m[4] * m[1] * m[10] + m[4] * m[2] * m[9] +
		m[8] * m[1] * m[6] - m[8] * m[2] * m[5];
}

t_mat4		mat4_inverse(const t_mat4 matrix)
{
	t_mat4	inverse;
	float	determinant;
	int		i;

	part0(matrix.value, inverse.value);
	part1(matrix.value, inverse.value);
	determinant = matrix.value[0] * inverse.value[0] +
	matrix.value[1] * inverse.value[4] +
	matrix.value[2] * inverse.value[8] +
	matrix.value[3] * inverse.value[12];
	if (determinant == 0)
		return (matrix);
	determinant = 1.0F / determinant;
	i = -1;
	while (++i < 16)
		inverse.value[i] = inverse.value[i] * determinant;
	return (inverse);
}
