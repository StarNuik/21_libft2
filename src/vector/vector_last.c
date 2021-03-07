/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:13:35 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 20:42:52 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

void	*vector_last(t_vector *vector)
{
	if (vector_is_empty(vector))
		return (0);
	return (vector->memory[vector->length - 1]);
}
