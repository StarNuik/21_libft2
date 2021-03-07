/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_set.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 19:00:42 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/06 22:32:37 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/base.h"

char		arr_set(t_array *arr, size_t index, long long value)
{
	if (!arr || index >= arr->length)
		return (0);
	arr->field[index] = value;
	return (1);
}
