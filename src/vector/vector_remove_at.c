/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_remove_at.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 07:37:06 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 17:01:43 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

void		*vector_remove_at(t_vector *vector, const size_t index)
{
	void	*result;

	if (vector_is_empty(vector) || index >= vector->length)
		return (NULL);
	result = vector->memory[index];
	if (index == vector->length - 1)
		vector->memory[index] = NULL;
	else
		ft_memmove(vector->memory[index], vector->memory[index + 1], SIZEOF * (vector->length - index));
	vector->length--;
	return (result);
}
