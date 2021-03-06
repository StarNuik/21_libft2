/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_topsorb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:15:47 by sbosmer           #+#    #+#             */
/*   Updated: 2019/05/01 14:15:55 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		arr_topsorb(t_array *arr, long long *ptr, size_t ammount)
{
	size_t	qt;

	if (!arr || !ptr || !ammount)
		return (0);
	while (arr->mem_size < (arr->length + ammount) * sizeof(long long))
		if (!arr_sizeup(arr))
			return (0);
	if (arr->length)
		ft_memmove(arr->field + ammount, arr->field,
			arr->length * sizeof(long long));
	arr->length += ammount;
	qt = -1;
	while (++qt < ammount)
		arr->field[qt] = ptr[qt];
	return (1);
}
