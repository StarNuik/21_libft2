/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:59:44 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 16:07:03 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/math.h"

float	math_max(const float left, const float right)
{
	return (left > right ? left : right);
}
