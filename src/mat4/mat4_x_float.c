/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_x_float.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 17:18:24 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 15:36:39 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_mat4			ft_m4multnum(const t_mat4 matrix, float number)
{
	t_mat4		result;
	int			i;

	i = -1;
	while (++i < 16)
		result.value[i] = matrix.value[i] * number;
	return (result);
}
