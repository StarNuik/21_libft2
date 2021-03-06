/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_unshift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:11:25 by sbosmer           #+#    #+#             */
/*   Updated: 2019/07/02 19:09:21 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		arr_unshift(t_array *arr, long long num)
{
	if (!arr)
		return (0);
	if (arr->length * sizeof(long long) == arr->mem_size)
		if (!arr_sizeup(arr))
			return (0);
	if (!arr)
		return (0);
	ft_memmove(arr->field + 1, arr->field, arr->length * sizeof(long long));
	arr->field[0] = num;
	arr->length++;
	return (1);
}
