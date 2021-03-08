/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_zero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 09:55:10 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 17:29:34 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/linal.h"

t_mat4			mat4_zero(void)
{
	t_mat4		result;

	ft_bzero(result.value, sizeof(float) * 16);
	return (result);
}
