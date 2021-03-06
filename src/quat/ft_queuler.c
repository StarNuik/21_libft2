/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queuler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 09:29:29 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

t_ernion	ft_queuler(double angle_x, double angle_y, double angle_z)
{
	t_ernion	res;
	t_ernion	tempq;

	res = QU_IDENTITY;
	tempq = ft_qurotation(V3_FORWARD, angle_z);
	res = ft_qumultiply(res, tempq);
	tempq = ft_qurotation(V3_UP, angle_y);
	res = ft_qumultiply(res, tempq);
	tempq = ft_qurotation(V3_RIGHT, angle_x);
	res = ft_qumultiply(res, tempq);
	return (res);
}
