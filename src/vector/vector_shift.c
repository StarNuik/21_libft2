/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_shift.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:14:29 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 16:43:32 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

void		*vector_shift(t_vector *vector)
{
	void	*result;

	if (vector_is_empty(vector))
		return (NULL);
	result = vector->memory[0];
	vector->memory[0] = NULL;
	vector->length--;
	if (vector->length > 0)
		ft_memmove(vector->memory, vector->memory + 1, SIZEOF * vector->length);
	return (result);
}
