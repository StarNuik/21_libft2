/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 19:00:42 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 16:39:36 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

void		*vector_set(t_vector *vector, const size_t index, const void *object)
{
	void	*old;
	if (vector_is_empty(vector) || index >= vector->length)
		return (NULL);
	old = vector->memory[index];
	vector->memory[index] = object;
	return (old);
}
