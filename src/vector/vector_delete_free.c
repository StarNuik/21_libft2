/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_delete_free.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:05:42 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 17:34:04 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

static void	free_element(const size_t index, void *object)
{
	int		i;

	i = index;
	i++;
	free(object);
}

void		*vector_delete_free(t_vector *vector)
{
	if (vector_is_empty(vector))
		return (vector_delete(vector));
	vector_foreach(vector, free_element);
	return (vector_delete(vector));
}
