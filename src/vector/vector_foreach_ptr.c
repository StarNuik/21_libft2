/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_foreach_ptr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 07:35:12 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 17:24:22 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

void		vector_foreach_ptr(t_vector *vector, void *user_data,
	void (*f)(size_t, void *, void *))
{
	size_t	qt;

	if (vector_is_empty(vector))
		return ;
	qt = -1;
	while (++qt < vector->length)
		f(qt, vector->memory[qt], user_data);
}
