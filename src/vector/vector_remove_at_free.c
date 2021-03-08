/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_remove_at_free.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 07:37:06 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 17:03:15 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

void		vector_remove_at_free(t_vector *vector, const size_t index)
{
	void	*object;

	object = vector_remove_at(vector, index);
	if (object != NULL)
		free(object);
}
