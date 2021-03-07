/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:13:20 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 20:42:21 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

void	*vector_top(t_vector *vector)
{
	if (vector_is_empty(vector))
		return (NULL);
	return (vector->memory[0]);
}
