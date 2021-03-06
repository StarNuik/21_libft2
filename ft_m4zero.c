/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m4zero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 09:55:10 by sbosmer           #+#    #+#             */
/*   Updated: 2019/05/13 10:07:50 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_matrix4x4		ft_m4zero(void)
{
	t_matrix4x4		res;

	res.value[0][0] = 0;
	res.value[0][1] = 0;
	res.value[0][2] = 0;
	res.value[0][3] = 0;
	res.value[1][0] = 0;
	res.value[1][1] = 0;
	res.value[1][2] = 0;
	res.value[1][3] = 0;
	res.value[2][0] = 0;
	res.value[2][1] = 0;
	res.value[2][2] = 0;
	res.value[2][3] = 0;
	res.value[3][0] = 0;
	res.value[3][1] = 0;
	res.value[3][2] = 0;
	res.value[3][3] = 0;
	return (res);
}
