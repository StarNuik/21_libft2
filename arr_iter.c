/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_iter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 00:22:39 by sbosmer           #+#    #+#             */
/*   Updated: 2019/08/10 17:38:32 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	arr_iter(t_array *arr, void (*f)(size_t, long long))
{
	size_t		qt;

	if (!arr || arr->length == 0)
		return ;
	qt = -1;
	while (++qt < arr->length)
		f(qt, arr->field[qt]);
}
