/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_at.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:12:46 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 17:13:39 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

void	*vector_at(t_vector *vector, const size_t index)
{
	if (vector_is_empty(vector) || index >= vector->length)
		return (NULL);
	return (vector->memory[index]);
}
