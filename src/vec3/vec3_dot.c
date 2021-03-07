/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_dot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 10:48:16 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 18:18:52 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

float		vec3_dot(const t_vec3 left, const t_vec3 right)
{
	float	result;

	result = left.x * right.x;
	result += left.y * right.y;
	result += left.z * right.z;
	return (result);
}
