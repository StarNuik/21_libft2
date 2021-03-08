/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 03:12:58 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/08 16:45:31 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

void	vector_clear(t_vector *vector)
{
	if (vector_is_empty(vector))
		return ;
	ft_bzero(vector->memory, SIZEOF * vector->length);
	vector->length = 0;
}
