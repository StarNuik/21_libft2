/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_determinant.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 14:43:57 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 15:35:21 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

float	mat4_determinant(const t_mat4 m)
{
	return (m.value[12] * m.value[9] * m.value[6] * m.value[3] -
	m.value[8] * m.value[13] * m.value[6] * m.value[3] -
	m.value[12] * m.value[5] * m.value[10] * m.value[3] +
	m.value[4] * m.value[13] * m.value[10] * m.value[3] +
	m.value[8] * m.value[5] * m.value[14] * m.value[3] -
	m.value[4] * m.value[9] * m.value[14] * m.value[3] -
	m.value[12] * m.value[9] * m.value[2] * m.value[7] +
	m.value[8] * m.value[13] * m.value[2] * m.value[7] +
	m.value[12] * m.value[1] * m.value[10] * m.value[7] -
	m.value[0] * m.value[13] * m.value[10] * m.value[7] -
	m.value[8] * m.value[1] * m.value[14] * m.value[7] +
	m.value[0] * m.value[9] * m.value[14] * m.value[7] +
	m.value[12] * m.value[5] * m.value[2] * m.value[11] -
	m.value[4] * m.value[13] * m.value[2] * m.value[11] -
	m.value[12] * m.value[1] * m.value[6] * m.value[11] +
	m.value[0] * m.value[13] * m.value[6] * m.value[11] +
	m.value[4] * m.value[1] * m.value[14] * m.value[11] -
	m.value[0] * m.value[5] * m.value[14] * m.value[11] -
	m.value[8] * m.value[5] * m.value[2] * m.value[15] +
	m.value[4] * m.value[9] * m.value[2] * m.value[15] +
	m.value[8] * m.value[1] * m.value[6] * m.value[15] -
	m.value[0] * m.value[9] * m.value[6] * m.value[15] -
	m.value[4] * m.value[1] * m.value[10] * m.value[15] +
	m.value[0] * m.value[5] * m.value[10] * m.value[15]);
}
