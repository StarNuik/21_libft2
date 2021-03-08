/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:11:25 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 17:35:39 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

t_bool		vector_insert(t_vector *vector, void *object, const size_t index)
{
	if (!vector || !object || index > vector->length)
		return (FALSE);
	if (vector_is_full(vector))
		if (!vector_expand(vector))
			return (FALSE);
	if (index != vector->length)
		ft_memmove(vector->memory + 1 + index,
			vector->memory + index,
			SIZEOF * (vector->length - index));
	vector->memory[index] = object;
	vector->length++;
	return (TRUE);
}
