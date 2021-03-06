/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qurotation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 09:22:00 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

t_ernion	ft_qurotation(t_vector3 axis, double angle)
{
	t_ernion	res;
	double		rad_angle;

	rad_angle = angle * DEG2RAD;
	res.w = cos(rad_angle / 2.0);
	res.x = axis.x * sin(rad_angle / 2.0);
	res.y = axis.y * sin(rad_angle / 2.0);
	res.z = axis.z * sin(rad_angle / 2.0);
	return (res);
}