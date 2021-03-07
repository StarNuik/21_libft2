/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_subtract.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 10:29:38 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 18:26:11 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_vec3		vec3_subtract(const t_vec3 left, const t_vec3 right)
{
	t_vec3	result;

	result.x = left.x - right.x;
	result.y = left.y - right.y;
	result.z = left.z - right.z;
	return (result);
}
