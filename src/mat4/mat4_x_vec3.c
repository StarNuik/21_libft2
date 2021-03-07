/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_x_vec3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:36:56 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 15:38:31 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_vec3		ft_m4xv3(const t_mat4 matrix, const t_vec3 vector)
{
	t_vec3	result;
	
	result = vec4_to_vec3(mat4_x_vec4(matrix, vec3_to_vec4(vector)));
	return (result);
}
