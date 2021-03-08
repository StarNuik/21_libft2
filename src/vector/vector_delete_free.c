/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_delete_free.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:05:42 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 16:51:19 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

static 

void		*vector_delete_free(t_vector *vector)
{
	if (vector_is_empty(vector))
		return (vector_delete(vector));
	vector_foreach(vector, __free_element);
	return (vector_delete(vector));
}
