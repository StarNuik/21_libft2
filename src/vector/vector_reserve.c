/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_reserve.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:06:01 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 20:24:39 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

t_bool		vector_reserve(t_vector *vector, const size_t length)
{
	size_t	new_size;
	void	*new_ptr;

	if (!vector)
		return (FALSE);
	new_size = SIZEOF * length;
	if (new_size <= vector->mem_size)
		return (TRUE);
	new_ptr = ft_realloc(vector->memory, vector->mem_size, new_size);
	if (!new_ptr)
		return (FALSE);
	vector->memory = new_ptr;
	vector->mem_size = new_size;
	return (TRUE);
}
