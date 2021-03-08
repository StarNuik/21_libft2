/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_remove_at_free.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 07:37:06 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 19:31:38 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"
#include <stdio.h>

void		vector_remove_at_free(t_vector *vector, const size_t index)
{
	void	*object;

	object = vector_remove_at(vector, index);
	if (object != NULL)
		free(object);
}
