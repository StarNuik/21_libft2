/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:11:10 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 20:28:53 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

t_bool		vector_push_back(t_vector *vector, const void *object)
{
	if (!vector || !object)
		return (FALSE);
	if (vector_is_full(vector))
		if (!vector_expand(vector))
			return (FALSE);
	vector->memory[vector->length] = object;
	vector->length++;
	return (TRUE);
}
