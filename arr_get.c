/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:12:46 by sbosmer           #+#    #+#             */
/*   Updated: 2019/05/01 17:22:30 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	arr_get(t_array *arr, size_t index)
{
	if (!arr || index >= arr->length)
		return (0);
	return (arr->field[index]);
}
