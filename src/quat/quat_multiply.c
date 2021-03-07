/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_multiply.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 09:19:08 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 16:36:32 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_quat		quat_multiply(const t_quat left, const t_quat right)
{
	t_quat	result;

	result.w = left.w * right.w - left.x * right.x -
		left.y * right.y - left.z * right.z;
	result.x = left.w * right.x + left.x * right.w +
		left.y * right.z - left.z * right.y;
	result.y = left.w * right.y - left.x * right.z +
		left.y * right.w + left.z * right.x;
	result.z = left.w * right.z + left.x * right.y -
		left.y * right.x + left.z * right.w;
	return (result);
}
