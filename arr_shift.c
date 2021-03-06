/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_shift.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:14:29 by sbosmer           #+#    #+#             */
/*   Updated: 2019/05/01 14:14:34 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	arr_shift(t_array *arr)
{
	long long	res;

	if (!arr || arr->length == 0)
		return (0);
	res = arr->field[0];
	arr->field[0] = 0;
	arr->length--;
	if (arr->length)
		ft_memmove(arr->field, arr->field + 1, arr->length * sizeof(long long));
	return (res);
}
