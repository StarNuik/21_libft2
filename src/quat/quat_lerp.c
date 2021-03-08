/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_lerp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:24:30 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 17:31:08 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_quat		quat_lerp(const t_quat from, const t_quat to, const float f)
{
	t_quat	result;

	result.w = math_lerp(from.w, to.w, f);
	result.x = math_lerp(from.x, to.x, f);
	result.y = math_lerp(from.y, to.y, f);
	result.z = math_lerp(from.z, to.z, f);
	return (result);
}
