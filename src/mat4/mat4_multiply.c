/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_multiply.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 10:00:15 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/14 03:03:44 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

static float	count_elem(const float *a, const float *b,
	const int x, const int y)
{
	float		res;

	res = a[y * 4 + 0] * b[0 + x];
	res += a[y * 4 + 1] * b[4 + x];
	res += a[y * 4 + 2] * b[8 + x];
	res += a[y * 4 + 3] * b[12 + x];
	return (res);
}

t_mat4			mat4_multiply(const t_mat4 left, const t_mat4 right)
{
	t_mat4		result;

	result.value[0] = count_elem(left.value, right.value, 0, 0);
	result.value[1] = count_elem(left.value, right.value, 0, 1);
	result.value[2] = count_elem(left.value, right.value, 0, 2);
	result.value[3] = count_elem(left.value, right.value, 0, 3);
	result.value[4] = count_elem(left.value, right.value, 1, 0);
	result.value[5] = count_elem(left.value, right.value, 1, 1);
	result.value[6] = count_elem(left.value, right.value, 1, 2);
	result.value[7] = count_elem(left.value, right.value, 1, 3);
	result.value[8] = count_elem(left.value, right.value, 2, 0);
	result.value[9] = count_elem(left.value, right.value, 2, 1);
	result.value[10] = count_elem(left.value, right.value, 2, 2);
	result.value[11] = count_elem(left.value, right.value, 2, 3);
	result.value[12] = count_elem(left.value, right.value, 3, 0);
	result.value[13] = count_elem(left.value, right.value, 3, 1);
	result.value[14] = count_elem(left.value, right.value, 3, 2);
	result.value[15] = count_elem(left.value, right.value, 3, 3);
	return (result);
}
