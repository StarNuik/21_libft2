/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_find.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 02:09:23 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 20:46:18 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

size_t		vector_find(t_vector *vector, const void *object)
{
	size_t		qt;

	if (vector_is_empty(vector))
		return (-1);
	qt = -1;
	while (++qt < vector->length)
		if (vector->memory[qt] == object)
			return (qt);
	return (-1);
}
