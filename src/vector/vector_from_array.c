/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_from_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:16:19 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 20:26:12 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

t_vector		*vector_from_array(const void *source, const size_t length)
{
	t_vector	*vector;
	t_bool		res;

	if (!source)
		return (NULL);
	vector = vector_new();
	if (!vector)
		return (NULL);
	res = vector_reserve(vector, length);
	if (!res)
	{
		vector_delete(vector);
		return (NULL);
	}
	ft_memmove(vector->memory, source, sizeof(void *) * length);	
	return (vector);
}
