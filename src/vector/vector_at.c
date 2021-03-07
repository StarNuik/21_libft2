/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_at.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:12:46 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 19:21:01 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

long long	arr_get(t_array *arr, size_t index)
{
	if (!arr || index >= arr->length)
		return (0);
	return (arr->field[index]);
}
