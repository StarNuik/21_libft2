/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m4multnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 17:18:24 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

t_matrix4x4		ft_m4multnum(t_matrix4x4 a, double num)
{
	t_matrix4x4		res;

	res.value[0][0] = a.value[0][0] * num;
	res.value[0][1] = a.value[0][1] * num;
	res.value[0][2] = a.value[0][2] * num;
	res.value[0][3] = a.value[0][3] * num;
	res.value[1][0] = a.value[1][0] * num;
	res.value[1][1] = a.value[1][1] * num;
	res.value[1][2] = a.value[1][2] * num;
	res.value[1][3] = a.value[1][3] * num;
	res.value[2][0] = a.value[2][0] * num;
	res.value[2][1] = a.value[2][1] * num;
	res.value[2][2] = a.value[2][2] * num;
	res.value[2][3] = a.value[2][3] * num;
	res.value[3][0] = a.value[3][0] * num;
	res.value[3][1] = a.value[3][1] * num;
	res.value[3][2] = a.value[3][2] * num;
	res.value[3][3] = a.value[3][3] * num;
	return (res);
}
