/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m4transpose.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:07:38 by sbosmer           #+#    #+#             */
/*   Updated: 2019/06/17 22:37:50 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_matrix4x4		ft_m4transpose(t_matrix4x4 a)
{
	t_matrix4x4		res;

	res.value[0][0] = a.value[0][0];
	res.value[0][1] = a.value[1][0];
	res.value[0][2] = a.value[2][0];
	res.value[0][3] = a.value[3][0];
	res.value[1][0] = a.value[0][1];
	res.value[1][1] = a.value[1][1];
	res.value[1][2] = a.value[2][1];
	res.value[1][3] = a.value[3][1];
	res.value[2][0] = a.value[0][2];
	res.value[2][1] = a.value[1][2];
	res.value[2][2] = a.value[2][2];
	res.value[2][3] = a.value[3][2];
	res.value[3][0] = a.value[0][3];
	res.value[3][1] = a.value[1][3];
	res.value[3][2] = a.value[2][3];
	res.value[3][3] = a.value[3][3];
	return (res);
}
