/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_clamp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 21:22:58 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 16:06:17 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/math.h"

float	math_clamp(const float value, const float min, const float max)
{
	return (math_max(math_min(value, max), min));
}
