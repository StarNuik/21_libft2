/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_find.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 02:09:23 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 19:21:15 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

size_t		arr_find(t_array *arr, long long target)
{
	size_t		qt;

	if (!arr || arr->length == 0)
		return (-1);
	qt = -1;
	while (++qt < arr->length)
		if (arr->field[qt] == target)
			return (qt);
	return (-1);
}
