/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linal.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 21:43:17 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:33:09 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT2_LINAL_H
# define LIBFT2_LINAL_H

# include "base.h"

typedef struct		s_vector3f
{
	float			x;
	float			y;
	float			z;
}					t_vec3;

typedef struct		s_vector4f
{
	float			x;
	float			y;
	float			z;
	float			w;
}					t_vec4;

typedef struct		s_quaternion
{
	float			w;
	float			x;
	float			y;
	float			z;
}					t_quat;


typedef struct		s_matrix4x4
{
	float			value[16];
}					t_mat4;

t_vec3				vec3_add(const t_vec3 left, const t_vec3 right);
t_vec3				vec3_subtract(const t_vec3 left, const t_vec3 right);
t_vec3				vec3_multiply(const t_vec3 vector, const float number);
t_vec3				vec3_divide(const t_vec3 vector, const float number);
t_vec3				vec3_normalize(const t_vec3 vector);
t_vec3				vec3_cross(const t_vec3 left, const t_vec3 right);
t_vec3				vec3_invert(const t_vec3 vector);
t_vec3				vec3_rotate(const t_vec3 vector, const t_quat rotation);
t_vec3				vec3_euleur(const t_vec3 vector, const float degrees_x, const float degrees_y, const float degrees_z);
t_vec3				vec3_abs(const t_vec3 vector);
float				vec3_length(const t_vec3 vector);
float				vec3_dot(const t_vec3 left, const t_vec3 right);
float				vec3_dot2(const t_vec3 vector);
t_vec4				vec3_to_vec4(const t_vec3 vector);
t_vec4				vec3_to_vec4_point(const t_vec3 vector);

t_vec3				vec4_to_v3(const t_vec4 vector);

t_vec4				mat4_x_vec4(const t_mat4 matrix, const t_vec4 vector);
t_vec3				mat4_x_vec3(const t_mat4 matrix, const t_vec3 vector);
t_mat4				mat4_zero(void);
t_mat4				mat4_identity(void);
t_mat4				mat4_transpose(const t_mat4 matrix);
t_mat4				mat4_multiply(const t_mat4 left, const t_mat4 right);
t_mat4				mat4_mult_num(const t_mat4 matrix, const float number);
t_mat4				mat4_invert(const t_mat4 matrix);
float				mat4_determinant(const t_mat4 matrix);

t_mat4				quat_rotation_matrix(const t_quat quaternion);
t_quat				quat_multiply(const t_quat left, const t_quat right);
t_quat				quat_rotate_around(const t_vec3 axis, const float degrees);
t_quat				quat_from_euler(const float degrees_x, const float degrees_y, const float degrees_z);
t_quat				quat_invert(const t_quat quaternion);

#endif
