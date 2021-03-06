/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_sizeup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:06:01 by sbosmer           #+#    #+#             */
/*   Updated: 2019/05/01 14:06:31 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		arr_sizeup(t_array *arr)
{
	if (!arr)
		return (0);
	if (!arr->mem_size)
	{
		arr->field = (long long*)ft_memalloc(sizeof(long long) * 4);
		if (!arr)
			return (0);
		arr->mem_size = sizeof(long long) * 4;
		return (1);
	}
	arr->field = ft_realloc(arr->field, arr->mem_size, arr->mem_size * 2);
	if (!arr->field)
		return (0);
	arr->mem_size = arr->mem_size * 2;
	return (1);
}
