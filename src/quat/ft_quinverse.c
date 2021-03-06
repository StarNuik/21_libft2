/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quinverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 10:18:09 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

t_ernion	ft_quinverse(t_ernion a)
{
	double		length;
	t_ernion	res;

	length = 1.0f / (a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w);
	res.x = a.x * -length;
	res.y = a.y * -length;
	res.z = a.z * -length;
	res.w = a.w * length;
	return (res);
}
