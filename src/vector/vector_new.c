/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:05:14 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 20:22:40 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2/vector.h"

t_vector		*vector_new(void)
{
	t_vector	*result;

	result = ft_memalloc(sizeof(t_vector));
	if (!result)
		return (NULL);
	result.length = 0;
	if (!vector_expand(vector))
	{
		vector_delete(vector);
		return (NULL);
	}
	return (result);
}
