/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:59:43 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 16:07:05 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/math.h"

float	math_min(const float left, const float right)
{
	return (left < right ? left : right);
}
