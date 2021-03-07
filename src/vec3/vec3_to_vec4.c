/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_to_vec4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:33:20 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 18:26:02 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_vec4		vec3_to_vec4(const t_vec3 vec)
{
	return ((t_vec4){vec.x, vec.y, vec.z, 0.0f});
}