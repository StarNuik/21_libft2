/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_x_float.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 10:30:03 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 18:19:53 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_vec3		vec3_x_float(const t_vec3 vector, const float number)
{
	t_vec3	result;

	result.x = vector.x * number;
	result.y = vector.y * number;
	result.z = vector.z * number;
	return (result);
}
