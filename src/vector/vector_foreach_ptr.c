/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_foreach_ptr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 07:35:12 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 19:21:17 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

void	arr_iterv(t_array *arr, void *user_data,
	void (*f)(size_t, long long, void *))
{
	size_t		qt;

	if (!arr || arr->length == 0)
		return ;
	qt = -1;
	while (++qt < arr->length)
		f(qt, arr->field[qt], user_data);
}
