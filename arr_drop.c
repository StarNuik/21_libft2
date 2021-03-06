/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_drop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 23:51:14 by sbosmer           #+#    #+#             */
/*   Updated: 2019/08/10 17:38:13 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long		arr_drop(t_array *arr, size_t index)
{
	long long		res;

	if (!arr || arr->length == 0 || index >= arr->length)
		return (0);
	res = arr->field[index];
	arr->field[index] = 0;
	arr->length--;
	if (arr->length != index)
		ft_memmove(arr->field + index, arr->field + index + 1,
			(arr->length - index) * sizeof(long long));
	return (res);
}
