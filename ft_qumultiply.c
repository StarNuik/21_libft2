/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qumultiply.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 09:19:08 by sbosmer           #+#    #+#             */
/*   Updated: 2019/06/17 22:45:54 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ernion	ft_qumultiply(t_ernion first, t_ernion second)
{
	t_ernion	res;

	res.w = first.w * second.w - first.x * second.x -
			first.y * second.y - first.z * second.z;
	res.x = first.w * second.x + first.x * second.w +
			first.y * second.z - first.z * second.y;
	res.y = first.w * second.y - first.x * second.z +
			first.y * second.w + first.z * second.x;
	res.z = first.w * second.z + first.x * second.y -
			first.y * second.x + first.z * second.w;
	return (res);
}
