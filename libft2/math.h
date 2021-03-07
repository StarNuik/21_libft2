/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 14:16:42 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 14:37:14 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT2_MATH_H
# define LIBFT2_MATH_H

# include <math.h>

# define D_PI (3.14159265358979323846264338327950288)
# define D_RAD2DEG (180.0 / D_PI)
# define D_DEG2RAD (D_PI / 180.0)
# define PI (3.14159265F)
# define RAD2DEG (180.0F / PI)
# define DEG2RAD (PI / 180.0F)

float				math_abs(const float value);
float				math_min(const float left, const float right);
float				math_max(const float left, const float right);
float				math_clamp(const float value, const float min, const float max);
float				math_clamp01(const float value);
float				math_lerp(const float from, const float to, const float f);
float				math_sign(const float value);
float				math_pingpong(const float value, const float min, const float max);
float				math_repeat(const float value, const float min, const float max);

#endif
