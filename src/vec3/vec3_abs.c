/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_abs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:58:06 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 18:17:00 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_vec3		vec3_abs(const t_vec3 vector)
{
	return ((t_vec3){fabsf(vector.x), fabsf(vector.y), fabsf(vector.z)});
}
