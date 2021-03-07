/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_normalize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 10:35:13 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 18:23:29 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_vec3		vec3_normalize(const t_vec3 vector)
{
	t_vec3	result;
	float	length;

	length = vec3_length(vector);
	if (length == 0.0f)
		return (VEC3_ZERO);
	result = vec3_x_float(vector, 1.0f / length);
	return (result);
}
