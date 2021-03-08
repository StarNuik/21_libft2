/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_clear_free.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 03:12:58 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 17:33:52 by sbosmer          ###   ########.fr       */
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

void		vector_clear_free(t_vector *vector)
{
	if (vector_is_empty(vector))
		return ;
	vector_foreach(vector, free_element);
	vector_clear(vector);
}
