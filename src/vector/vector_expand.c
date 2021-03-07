/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_expand.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:17:05 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 20:23:09 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

t_bool		vector_expand(t_vector *vector)
{
	size_t new_length;

	if (!vector)
		return (FALSE);
	new_length = vector->mem_size / SIZEOF * 2;
	if (vector->mem_size == 0)
		new_length = START_LENGTH;
	return (vector_reserve(vector, new_length));
}
