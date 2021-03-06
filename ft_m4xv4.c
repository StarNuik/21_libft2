/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m4xv4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 10:12:55 by sbosmer           #+#    #+#             */
/*   Updated: 2019/06/17 22:37:29 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector4		ft_m4xv4(t_matrix4x4 matrix, t_vector4 vector)
{
	t_vector4		res;
	t_matrix4x4		b;

	b = ft_m4zero();
	b.value[0][0] = vector.x;
	b.value[0][1] = vector.y;
	b.value[0][2] = vector.z;
	b.value[0][3] = vector.w;
	b = ft_m4multiply(matrix, b);
	res.x = b.value[0][0];
	res.y = b.value[0][1];
	res.z = b.value[0][2];
	res.w = b.value[0][3];
	return (res);
}
