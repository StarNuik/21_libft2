/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m4multiply.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 10:00:15 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

static double	count_elem(t_matrix4x4 a, t_matrix4x4 b, char x, char y)
{
	double		res;

	res = a.value[0][(int)y] * b.value[(int)x][0];
	res += a.value[1][(int)y] * b.value[(int)x][1];
	res += a.value[2][(int)y] * b.value[(int)x][2];
	res += a.value[3][(int)y] * b.value[(int)x][3];
	return (res);
}

t_matrix4x4		ft_m4multiply(t_matrix4x4 a, t_matrix4x4 b)
{
	t_matrix4x4 res;

	res.value[0][0] = count_elem(a, b, 0, 0);
	res.value[0][1] = count_elem(a, b, 0, 1);
	res.value[0][2] = count_elem(a, b, 0, 2);
	res.value[0][3] = count_elem(a, b, 0, 3);
	res.value[1][0] = count_elem(a, b, 1, 0);
	res.value[1][1] = count_elem(a, b, 1, 1);
	res.value[1][2] = count_elem(a, b, 1, 2);
	res.value[1][3] = count_elem(a, b, 1, 3);
	res.value[2][0] = count_elem(a, b, 2, 0);
	res.value[2][1] = count_elem(a, b, 2, 1);
	res.value[2][2] = count_elem(a, b, 2, 2);
	res.value[2][3] = count_elem(a, b, 2, 3);
	res.value[3][0] = count_elem(a, b, 3, 0);
	res.value[3][1] = count_elem(a, b, 3, 1);
	res.value[3][2] = count_elem(a, b, 3, 2);
	res.value[3][3] = count_elem(a, b, 3, 3);
	return (res);
}
