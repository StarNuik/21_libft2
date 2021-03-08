/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_foreach.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 00:22:39 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 16:49:52 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

void		vector_foreach(t_vector *vector, void (*f)(size_t, void *))
{
	size_t	qt;

	if (vector_is_empty(vector))
		return ;
	qt = -1;
	while (++qt < vector->length)
		f(qt, vector->memory[qt]);
}
