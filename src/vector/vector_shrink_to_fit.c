/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_shrink_to_fit.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:17:05 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 17:10:30 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

t_bool		vector_shrink_to_fit(t_vector *vector)
{
	size_t	new_size;
	void	*new_ptr;

	if (vector_is_empty(vector) || vector->mem_size == SIZEOF * vector->length)
		return (FALSE);
	new_size = SIZEOF * vector->length;
	new_ptr = ft_realloc(vector->memory, vector->mem_size, new_size);
	if (!new_ptr)
		return (FALSE);
	vector->memory = new_ptr;
	return (TRUE);
}
