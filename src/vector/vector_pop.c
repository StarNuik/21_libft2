/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:14:10 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 16:41:47 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

void		*vector_pop(t_vector *vector)
{
	void	*result;

	if (vector_is_empty(vector))
		return (NULL);
	result = vector_last(vector);
	vector->memory[vector->length - 1] = NULL;
	vector->length--;
	return (result);
}
