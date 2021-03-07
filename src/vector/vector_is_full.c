/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_is_full.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:38:10 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 20:39:01 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

t_bool	vector_is_full(t_vector *vector)
{
	return (vector && vector->length * SIZEOF == vector->mem_size);
}
