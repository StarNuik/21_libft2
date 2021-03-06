/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:11:10 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:38 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

char		arr_push(t_array *arr, long long num)
{
	if (!arr)
		return (0);
	if (arr->length * sizeof(long long) == arr->mem_size)
		if (!arr_sizeup(arr))
			return (0);
	if (!arr)
		return (0);
	arr->field[arr->length] = num;
	arr->length++;
	return (1);
}
