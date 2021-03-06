/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_contains.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 02:39:36 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

char		arr_contains(t_array *arr, const long long val)
{
	size_t		qt;

	if (!arr || arr->length == 0)
		return (0);
	qt = -1;
	while (++qt < arr->length)
	{
		if (arr->field[qt] == val)
			return (1);
	}
	return (0);
}
