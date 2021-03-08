/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_identity.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 09:57:49 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 17:28:55 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_mat4			mat4_identity(void)
{
	t_mat4		result;

	result = mat4_zero();
	result.value[0] = 1;
	result.value[5] = 1;
	result.value[10] = 1;
	result.value[15] = 1;
	return (result);
}
