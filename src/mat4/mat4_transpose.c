/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_transpose.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:07:38 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 15:34:51 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_mat4			ft_m4transpose(const t_mat4 a)
{
	t_mat4		res;

	res.value[0] = a.value[0];
	res.value[1] = a.value[4];
	res.value[2] = a.value[8];
	res.value[3] = a.value[12];
	res.value[4] = a.value[1];
	res.value[5] = a.value[5];
	res.value[6] = a.value[9];
	res.value[7] = a.value[13];
	res.value[8] = a.value[2];
	res.value[9] = a.value[6];
	res.value[10] = a.value[10];
	res.value[11] = a.value[14];
	res.value[12] = a.value[3];
	res.value[13] = a.value[7];
	res.value[14] = a.value[11];
	res.value[15] = a.value[15];
	return (res);
}
