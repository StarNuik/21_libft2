/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_pop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:14:10 by sbosmer           #+#    #+#             */
/*   Updated: 2019/05/01 14:14:16 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	arr_pop(t_array *arr)
{
	long long	res;

	if (!arr || arr->length == 0)
		return (0);
	res = arr->field[arr->length - 1];
	arr->field[arr->length - 1] = 0;
	arr->length--;
	return (res);
}
